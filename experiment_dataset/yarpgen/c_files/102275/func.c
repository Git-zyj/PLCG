/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 102275
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=102275 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/102275
*/
#include "init.h"
#define max(a,b) \
    ({ __typeof__ (a) _a = (a); \
       __typeof__ (b) _b = (b); \
       _a > _b ? _a : _b; })
#define min(a,b) \
    ({ __typeof__ (a) _a = (a); \
       __typeof__ (b) _b = (b); \
       _a < _b ? _a : _b; })
void test() {
    /* LoopSeq 1 */
    for (unsigned char i_0 = 0; i_0 < 22; i_0 += 3) 
    {
        arr_4 [i_0] [i_0] = ((/* implicit */int) arr_1 [i_0]);
        var_15 = ((/* implicit */_Bool) min((var_15), (((((/* implicit */_Bool) -764171400)) && (((/* implicit */_Bool) 3946060616U))))));
        var_16 += ((/* implicit */signed char) (unsigned short)26128);
        arr_5 [i_0] [i_0] = ((/* implicit */_Bool) min((var_5), (((((/* implicit */_Bool) (short)25553)) ? (min((var_14), (((/* implicit */int) arr_3 [i_0])))) : (max((-764171400), (((/* implicit */int) var_8))))))));
        var_17 -= ((/* implicit */signed char) (short)-31785);
    }
    /* LoopNest 2 */
    for (signed char i_1 = 4; i_1 < 16; i_1 += 1) 
    {
        for (long long int i_2 = 2; i_2 < 19; i_2 += 3) 
        {
            {
                arr_11 [i_1] [2] [i_2] &= ((/* implicit */short) min(((~(((((/* implicit */long long int) ((/* implicit */int) (unsigned char)59))) / (4611686018427387904LL))))), (((/* implicit */long long int) (((-(arr_0 [i_1]))) ^ (((/* implicit */int) var_0)))))));
                arr_12 [i_1] = ((/* implicit */int) ((short) ((signed char) min(((unsigned char)16), (((/* implicit */unsigned char) (signed char)96))))));
                arr_13 [(signed char)10] |= ((/* implicit */short) (((_Bool)0) ? (-1) : (((/* implicit */int) (unsigned short)53383))));
            }
        } 
    } 
    /* LoopSeq 1 */
    for (short i_3 = 2; i_3 < 9; i_3 += 1) 
    {
        arr_16 [i_3] [i_3 - 2] = ((/* implicit */signed char) max((((/* implicit */int) ((((((/* implicit */int) (signed char)96)) | (((/* implicit */int) (signed char)24)))) > (((/* implicit */int) ((var_2) <= (arr_10 [i_3] [i_3] [i_3]))))))), (((((/* implicit */_Bool) ((signed char) (short)20711))) ? (((/* implicit */int) arr_6 [i_3 - 1])) : (min((((/* implicit */int) var_8)), (var_7)))))));
        var_18 = ((/* implicit */short) min((((((/* implicit */_Bool) (signed char)124)) ? (1252499182) : (((/* implicit */int) (short)-23544)))), (var_14)));
        /* LoopNest 2 */
        for (int i_4 = 0; i_4 < 10; i_4 += 1) 
        {
            for (short i_5 = 0; i_5 < 10; i_5 += 3) 
            {
                {
                    arr_23 [(signed char)8] [(signed char)8] &= ((/* implicit */unsigned short) (~(((/* implicit */int) var_4))));
                    var_19 = ((/* implicit */signed char) max((((((/* implicit */_Bool) (unsigned char)214)) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)0))) : (3504187232U))), (((/* implicit */unsigned int) ((arr_21 [i_3 + 1] [i_4] [i_4] [i_3 - 2]) ? (((/* implicit */int) arr_21 [i_3 - 2] [i_4] [i_4] [i_3 - 1])) : (((/* implicit */int) arr_21 [i_3 + 1] [i_4] [i_4] [i_3 - 1])))))));
                }
            } 
        } 
        var_20 &= ((/* implicit */signed char) (+(((/* implicit */int) var_9))));
    }
}
