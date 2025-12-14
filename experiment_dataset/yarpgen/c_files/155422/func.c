/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 155422
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=155422 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/155422
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
    var_12 &= ((/* implicit */unsigned short) var_7);
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned short i_0 = 0; i_0 < 17; i_0 += 1) 
    {
        var_13 = ((/* implicit */unsigned long long int) ((((/* implicit */int) arr_1 [i_0])) * (((/* implicit */int) arr_1 [i_0]))));
        var_14 = ((/* implicit */long long int) arr_0 [i_0]);
        /* LoopSeq 1 */
        for (unsigned int i_1 = 1; i_1 < 16; i_1 += 4) 
        {
            var_15 = ((/* implicit */signed char) var_5);
            var_16 ^= ((/* implicit */unsigned char) (!(((/* implicit */_Bool) arr_3 [(signed char)10] [i_1 - 1]))));
        }
    }
    /* LoopNest 3 */
    for (long long int i_2 = 0; i_2 < 13; i_2 += 1) 
    {
        for (int i_3 = 3; i_3 < 10; i_3 += 4) 
        {
            for (long long int i_4 = 0; i_4 < 13; i_4 += 1) 
            {
                {
                    arr_13 [i_4] [i_2] [i_2] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((var_4) ? (3953248772U) : (((/* implicit */unsigned int) arr_7 [i_2]))))) ? (var_8) : (((/* implicit */long long int) ((/* implicit */int) ((_Bool) var_1))))))) ? (((/* implicit */int) max((max(((signed char)38), (((/* implicit */signed char) arr_5 [i_3] [i_3])))), ((signed char)38)))) : (((/* implicit */int) arr_11 [i_2] [i_2] [i_3]))));
                    var_17 = ((/* implicit */short) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_4))) >= (((5341717598974454460ULL) | (((/* implicit */unsigned long long int) arr_2 [i_3 - 1] [i_3 - 3] [i_2]))))));
                    var_18 = ((/* implicit */signed char) var_5);
                    var_19 = ((/* implicit */unsigned int) max((((/* implicit */unsigned long long int) ((((var_10) % (((/* implicit */unsigned long long int) ((/* implicit */int) var_1))))) == (((/* implicit */unsigned long long int) min((((/* implicit */int) arr_1 [(unsigned short)0])), (arr_7 [(unsigned short)4]))))))), (((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)38)) ? (((/* implicit */int) (signed char)-38)) : (((/* implicit */int) (signed char)-32))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) min(((signed char)51), ((signed char)37))))) : (min((var_10), (((/* implicit */unsigned long long int) arr_5 [i_4] [i_2]))))))));
                    var_20 = ((signed char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)38)) ? (var_2) : (((/* implicit */unsigned long long int) arr_6 [i_2] [i_4])))))));
                }
            } 
        } 
    } 
    var_21 = ((/* implicit */short) ((((/* implicit */_Bool) (signed char)25)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)55))) : (18014778018100249836ULL)));
}
