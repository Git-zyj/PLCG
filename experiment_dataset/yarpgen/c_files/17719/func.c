/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 17719
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=17719 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/17719
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
    /* LoopNest 2 */
    for (unsigned char i_0 = 1; i_0 < 10; i_0 += 4) 
    {
        for (unsigned int i_1 = 0; i_1 < 13; i_1 += 3) 
        {
            {
                /* LoopSeq 3 */
                for (unsigned long long int i_2 = 0; i_2 < 13; i_2 += 4) 
                {
                    arr_8 [11U] [i_1] [(_Bool)1] = ((/* implicit */unsigned short) (_Bool)0);
                    arr_9 [i_0] [i_2] &= ((/* implicit */unsigned int) var_0);
                    var_15 = ((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) var_3))) + (arr_3 [i_1] [12ULL])));
                }
                for (unsigned char i_3 = 2; i_3 < 12; i_3 += 4) 
                {
                    var_16 = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) ((signed char) var_9))) ? (((/* implicit */long long int) arr_7 [i_1] [i_1])) : ((-(2988416015121809197LL))))) & (((/* implicit */long long int) ((/* implicit */int) ((((((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) / (2988416015121809197LL))) < (((/* implicit */long long int) ((/* implicit */int) arr_6 [i_1] [i_1] [i_1])))))))));
                    var_17 = ((/* implicit */unsigned char) ((2988416015121809186LL) + (2988416015121809175LL)));
                    arr_13 [i_1] [i_1] [i_3] = ((/* implicit */unsigned short) ((unsigned int) ((((/* implicit */_Bool) (~(((/* implicit */int) (unsigned char)150))))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) arr_1 [(unsigned short)2])) ? (arr_5 [i_0]) : (((/* implicit */int) arr_4 [i_1] [i_3]))))) : ((~(var_10))))));
                }
                for (unsigned long long int i_4 = 0; i_4 < 13; i_4 += 4) 
                {
                    var_18 = ((/* implicit */signed char) min((var_18), (((/* implicit */signed char) min(((!(((/* implicit */_Bool) -2988416015121809194LL)))), (((((/* implicit */long long int) ((/* implicit */int) ((arr_16 [i_4] [i_1] [i_0 + 2] [i_4]) && (((/* implicit */_Bool) var_7)))))) == (((((/* implicit */_Bool) arr_15 [i_0 + 3] [(unsigned short)12] [i_4] [(unsigned short)12])) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)0))) : (var_10))))))))));
                    var_19 = ((/* implicit */unsigned char) arr_3 [i_4] [i_0 + 2]);
                    var_20 = ((/* implicit */unsigned long long int) max((var_20), (((/* implicit */unsigned long long int) (short)22165))));
                    var_21 = ((/* implicit */_Bool) max((var_21), (((/* implicit */_Bool) (~(((/* implicit */int) (((+(((/* implicit */int) var_9)))) >= (((/* implicit */int) ((((/* implicit */unsigned long long int) -2988416015121809175LL)) == (13781347749118896053ULL))))))))))));
                }
                arr_17 [i_1] [i_1] = ((/* implicit */unsigned long long int) ((min((-2988416015121809201LL), (((/* implicit */long long int) ((((/* implicit */_Bool) arr_7 [i_1] [i_1])) ? (arr_10 [i_1] [i_0] [1]) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)130)))))))) == (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */int) arr_15 [i_0] [i_0 + 1] [i_1] [i_0])) ^ (((/* implicit */int) arr_11 [i_0 + 3] [1U])))))))))));
                /* LoopNest 2 */
                for (int i_5 = 0; i_5 < 13; i_5 += 4) 
                {
                    for (unsigned long long int i_6 = 1; i_6 < 9; i_6 += 4) 
                    {
                        {
                            arr_23 [(unsigned short)2] [i_1] [i_1] [i_1] [(unsigned short)2] = ((/* implicit */unsigned short) max((((((/* implicit */_Bool) 12372963473744827209ULL)) ? (arr_5 [i_0 + 2]) : (arr_5 [i_0 + 2]))), (((((/* implicit */_Bool) (-2147483647 - 1))) ? (((/* implicit */int) (unsigned char)130)) : (arr_5 [i_0 + 2])))));
                            arr_24 [i_0] [6LL] [i_5] [i_5] [i_6] [(unsigned char)8] &= ((/* implicit */unsigned char) min((((/* implicit */long long int) min((((/* implicit */unsigned short) var_12)), ((unsigned short)3)))), (2988416015121809175LL)));
                            /* LoopSeq 1 */
                            for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
                            {
                                var_22 -= ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) min(((unsigned short)3), (((/* implicit */unsigned short) (unsigned char)10)))))) ^ (((((/* implicit */_Bool) arr_0 [11ULL] [i_0])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_0] [i_6]))) : (arr_26 [i_7])))))) ? (13755223578673643125ULL) : (((((/* implicit */_Bool) ((((/* implicit */int) var_3)) | (arr_5 [(signed char)11])))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_6 [i_5] [i_6] [i_7])) ? (((/* implicit */int) arr_20 [i_5] [i_6] [i_5] [i_5])) : (((/* implicit */int) arr_16 [i_5] [i_1] [(signed char)2] [(signed char)2]))))) : (max((((/* implicit */unsigned long long int) arr_15 [i_0] [(signed char)4] [i_5] [i_7])), (12372963473744827209ULL)))))));
                                var_23 = ((/* implicit */unsigned char) arr_27 [i_0] [i_1]);
                            }
                            var_24 = ((/* implicit */unsigned char) min((var_24), (((/* implicit */unsigned char) ((((/* implicit */_Bool) var_10)) ? (((((/* implicit */_Bool) arr_6 [i_5] [i_5] [i_5])) ? (arr_18 [i_6 + 4] [i_6 + 1] [i_6] [i_5]) : (((/* implicit */int) max((arr_27 [i_1] [i_5]), (arr_0 [11ULL] [i_1])))))) : (((/* implicit */int) ((unsigned short) arr_0 [i_1] [12U]))))))));
                        }
                    } 
                } 
                var_25 = ((/* implicit */int) min((var_25), (((/* implicit */int) arr_22 [i_0] [8] [8] [8] [10]))));
            }
        } 
    } 
    var_26 = ((/* implicit */unsigned long long int) min((var_26), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((unsigned char) var_1))) ? (var_10) : (var_10))))));
}
