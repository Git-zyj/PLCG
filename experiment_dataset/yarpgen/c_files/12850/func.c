/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 12850
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=12850 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/12850
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
    var_18 = ((/* implicit */unsigned char) ((_Bool) var_4));
    /* LoopNest 2 */
    for (unsigned int i_0 = 1; i_0 < 14; i_0 += 1) 
    {
        for (int i_1 = 2; i_1 < 16; i_1 += 1) 
        {
            {
                /* LoopNest 2 */
                for (long long int i_2 = 0; i_2 < 17; i_2 += 3) 
                {
                    for (unsigned long long int i_3 = 1; i_3 < 14; i_3 += 1) 
                    {
                        {
                            var_19 |= ((/* implicit */signed char) min((((/* implicit */unsigned int) (!(((((/* implicit */int) arr_1 [i_2] [i_2])) == (-10)))))), (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_17)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_1))) : (arr_5 [i_0 + 2])))) ? (arr_3 [i_1 - 1]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_6 [i_3 + 3] [i_3 - 1] [i_3 + 3] [(short)8])))))));
                            var_20 = ((/* implicit */short) max((var_20), (((/* implicit */short) ((unsigned int) ((((((/* implicit */_Bool) arr_7 [(signed char)3] [i_1 - 1] [i_0] [i_1] [i_2])) ? (-14) : (((/* implicit */int) var_17)))) * (((((/* implicit */int) arr_6 [i_0] [6U] [9ULL] [(_Bool)1])) >> (((((/* implicit */int) var_1)) + (17272)))))))))));
                        }
                    } 
                } 
                var_21 = ((/* implicit */unsigned long long int) arr_3 [i_0]);
                var_22 ^= ((/* implicit */long long int) var_6);
            }
        } 
    } 
    /* LoopNest 2 */
    for (unsigned int i_4 = 0; i_4 < 19; i_4 += 1) 
    {
        for (long long int i_5 = 0; i_5 < 19; i_5 += 1) 
        {
            {
                var_23 = ((/* implicit */unsigned long long int) (~(((((((/* implicit */int) ((short) arr_10 [(signed char)0]))) + (2147483647))) >> ((~(((/* implicit */int) arr_9 [i_4]))))))));
                var_24 = ((/* implicit */unsigned long long int) var_12);
            }
        } 
    } 
    /* LoopSeq 1 */
    for (unsigned int i_6 = 4; i_6 < 20; i_6 += 1) 
    {
        var_25 &= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_7)) ? (18) : (((/* implicit */int) arr_16 [i_6 + 3] [i_6]))));
        var_26 += ((/* implicit */short) -564085249);
        var_27 = ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) ((short) arr_14 [i_6]))) && (((/* implicit */_Bool) (unsigned char)5)))) ? (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_13)))))) >= (((((/* implicit */_Bool) -9)) ? (((/* implicit */long long int) -15)) : (5912157769584405772LL)))))) : ((~(((/* implicit */int) ((signed char) arr_14 [i_6])))))));
    }
    var_28 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) -12)) ? (((/* implicit */unsigned int) ((/* implicit */int) ((short) var_8)))) : (((unsigned int) (unsigned short)16419))))) ? (3397051048U) : (((/* implicit */unsigned int) -3))));
}
