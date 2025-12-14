/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 15775
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=15775 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/15775
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
    var_19 = ((/* implicit */signed char) var_18);
    var_20 -= ((/* implicit */unsigned short) var_18);
    /* LoopNest 3 */
    for (long long int i_0 = 0; i_0 < 25; i_0 += 4) 
    {
        for (long long int i_1 = 0; i_1 < 25; i_1 += 3) 
        {
            for (long long int i_2 = 2; i_2 < 24; i_2 += 3) 
            {
                {
                    var_21 = ((/* implicit */_Bool) var_11);
                    var_22 = ((/* implicit */unsigned char) (unsigned short)55480);
                    arr_7 [i_0] [i_1] [i_2 + 1] |= ((/* implicit */unsigned char) ((((((1924387269236574671LL) < (((/* implicit */long long int) ((/* implicit */int) (short)17844))))) ? (((var_11) ^ (var_5))) : (((/* implicit */long long int) ((/* implicit */int) arr_2 [i_2 + 1]))))) % (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) var_15))) != (arr_6 [i_2] [i_2] [i_2 - 1] [i_1])))))));
                }
            } 
        } 
    } 
    /* LoopNest 3 */
    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
    {
        for (unsigned int i_4 = 0; i_4 < 20; i_4 += 3) 
        {
            for (long long int i_5 = 0; i_5 < 20; i_5 += 3) 
            {
                {
                    /* LoopSeq 2 */
                    for (long long int i_6 = 0; i_6 < 20; i_6 += 3) 
                    {
                        /* LoopSeq 1 */
                        for (unsigned char i_7 = 3; i_7 < 17; i_7 += 2) 
                        {
                            arr_21 [i_6] [i_3] [i_3] [i_3] [i_3] [i_3] = ((/* implicit */long long int) (!(((/* implicit */_Bool) max((((/* implicit */long long int) ((arr_6 [i_6] [i_5] [i_4] [i_3]) > (7989921536381065637LL)))), (min((var_4), (((/* implicit */long long int) var_15)))))))));
                            arr_22 [i_6] [i_4] [i_4] [i_6] [i_6] = ((/* implicit */long long int) var_2);
                            arr_23 [i_7] [i_6] [i_6] [i_3] = ((/* implicit */long long int) (!(((/* implicit */_Bool) (((!(((/* implicit */_Bool) var_1)))) ? (((/* implicit */int) arr_12 [i_3])) : (((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) (short)-17844)) : (((/* implicit */int) var_0)))))))));
                            arr_24 [i_3] [i_6] [i_3] [i_6] [i_7] = (!(((/* implicit */_Bool) max((max((var_6), (var_16))), (((/* implicit */long long int) ((((/* implicit */int) var_7)) > (((/* implicit */int) (signed char)24)))))))));
                            arr_25 [i_3] [i_4] [(signed char)14] [i_6] [i_7] [i_7] [i_5] &= ((/* implicit */unsigned short) ((signed char) ((unsigned int) var_6)));
                        }
                        var_23 = ((/* implicit */long long int) max((var_23), (min((((((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) arr_15 [i_3] [i_3] [i_3] [i_3])) > (((/* implicit */int) arr_20 [i_5])))))) / (7989921536381065637LL))), (((/* implicit */long long int) ((((/* implicit */int) (short)10592)) > (((/* implicit */int) ((var_9) != (7715839439208867906LL)))))))))));
                        arr_26 [i_6] [i_4] [2LL] [i_4] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) var_18))));
                        var_24 -= ((/* implicit */unsigned char) var_16);
                    }
                    for (long long int i_8 = 1; i_8 < 19; i_8 += 4) 
                    {
                        arr_30 [i_3] [i_3] [i_3] [i_8 - 1] [(unsigned char)0] [i_3] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((unsigned int) var_11))) ? (((((/* implicit */_Bool) ((long long int) var_11))) ? (((/* implicit */int) (unsigned char)0)) : (((((/* implicit */int) var_8)) >> (((var_6) + (2391867321575029398LL))))))) : (((((((/* implicit */int) (short)-10586)) + (2147483647))) >> (((((/* implicit */int) max((var_14), (var_12)))) - (42711)))))));
                        arr_31 [(unsigned char)15] [i_5] |= ((/* implicit */unsigned short) (!(((((-1LL) ^ (((/* implicit */long long int) ((/* implicit */int) var_8))))) < (((((/* implicit */_Bool) var_8)) ? (((/* implicit */long long int) ((/* implicit */int) (short)10592))) : (127LL)))))));
                        var_25 -= min((((((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) (short)0)) : (((/* implicit */int) var_15))))) ? (((long long int) var_9)) : (((var_18) ^ (arr_6 [(unsigned short)4] [i_4] [(unsigned short)4] [i_4]))))), (((/* implicit */long long int) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) (signed char)54)) : (((((/* implicit */int) var_17)) * (((/* implicit */int) (unsigned short)33600))))))));
                        arr_32 [7LL] [i_4] [i_4] [i_4] = ((/* implicit */unsigned short) (signed char)110);
                    }
                    var_26 = ((/* implicit */short) max((var_26), (((/* implicit */short) (!(((/* implicit */_Bool) var_4)))))));
                }
            } 
        } 
    } 
}
