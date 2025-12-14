/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 108908
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=108908 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/108908
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
    var_13 = ((/* implicit */long long int) (!(((/* implicit */_Bool) (-((-(((/* implicit */int) (unsigned short)8191)))))))));
    /* LoopNest 2 */
    for (short i_0 = 0; i_0 < 20; i_0 += 2) 
    {
        for (unsigned short i_1 = 1; i_1 < 17; i_1 += 2) 
        {
            {
                var_14 = ((/* implicit */unsigned long long int) min((var_14), (((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) var_9)) : ((+(((/* implicit */int) (signed char)-64))))))) + (((((((/* implicit */long long int) ((/* implicit */int) var_12))) - (var_11))) + (var_11))))))));
                var_15 = ((/* implicit */unsigned long long int) ((((arr_2 [i_1 + 3]) & (((/* implicit */long long int) ((/* implicit */int) var_3))))) % (((/* implicit */long long int) min(((-(((/* implicit */int) var_9)))), (((/* implicit */int) ((arr_3 [i_0] [i_0] [i_0]) <= (((/* implicit */unsigned long long int) arr_4 [6ULL]))))))))));
                var_16 = ((/* implicit */_Bool) (unsigned short)0);
                /* LoopNest 2 */
                for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
                {
                    for (short i_3 = 0; i_3 < 20; i_3 += 2) 
                    {
                        {
                            arr_9 [i_1] [(signed char)8] [i_2] [i_3] [i_0] [i_0] = ((/* implicit */long long int) ((((/* implicit */int) (!(arr_7 [(unsigned char)14] [i_0] [i_2] [i_3] [i_1] [i_1 + 2])))) != ((-(((/* implicit */int) arr_7 [i_2] [i_1 + 2] [i_2] [i_3] [15U] [i_1 + 3]))))));
                            /* LoopSeq 3 */
                            for (long long int i_4 = 0; i_4 < 20; i_4 += 1) 
                            {
                                var_17 = ((/* implicit */_Bool) (-(((((/* implicit */_Bool) arr_2 [i_1 + 2])) ? (arr_6 [i_1 + 1] [i_1 + 2] [i_1 + 3]) : (((/* implicit */unsigned long long int) arr_2 [i_1 + 1]))))));
                                var_18 = (((!(((/* implicit */_Bool) (signed char)-62)))) && (((/* implicit */_Bool) ((((/* implicit */int) ((_Bool) (unsigned short)65535))) | (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) var_3))) > (var_11))))))));
                                var_19 = ((/* implicit */unsigned char) max((((((/* implicit */_Bool) ((int) var_12))) ? (((/* implicit */long long int) ((/* implicit */int) arr_8 [i_1 + 3] [i_1 + 3] [i_1 - 1] [i_1] [(_Bool)1] [i_1 - 1]))) : (max((arr_2 [i_4]), (((/* implicit */long long int) (_Bool)1)))))), (((/* implicit */long long int) ((((/* implicit */_Bool) max((((/* implicit */unsigned int) (unsigned short)2)), (410456632U)))) || (((/* implicit */_Bool) (+(14387114689736975128ULL)))))))));
                            }
                            /* vectorizable */
                            for (int i_5 = 2; i_5 < 17; i_5 += 3) /* same iter space */
                            {
                                var_20 -= ((unsigned char) arr_10 [8ULL] [i_1 + 3] [i_2] [i_3] [i_5 + 3] [i_1 + 1]);
                                var_21 = ((/* implicit */unsigned long long int) max((var_21), (((/* implicit */unsigned long long int) ((unsigned char) (-(((/* implicit */int) var_9))))))));
                                var_22 = ((/* implicit */unsigned short) (+(((/* implicit */int) (_Bool)1))));
                            }
                            /* vectorizable */
                            for (int i_6 = 2; i_6 < 17; i_6 += 3) /* same iter space */
                            {
                                var_23 = ((/* implicit */long long int) (~(((/* implicit */int) var_3))));
                                arr_17 [i_0] [i_0] [i_2] [i_3] [i_6] = ((/* implicit */long long int) (-((-(((/* implicit */int) arr_8 [i_0] [i_3] [i_2] [i_3] [i_6] [(signed char)9]))))));
                            }
                            var_24 = ((/* implicit */_Bool) max((var_24), (((/* implicit */_Bool) (unsigned char)94))));
                            var_25 = ((/* implicit */signed char) min((var_25), (((/* implicit */signed char) max((((/* implicit */unsigned long long int) max((var_12), (var_12)))), (((((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)65535))) + (arr_15 [i_0] [i_1] [i_2]))) - (max((arr_15 [i_3] [i_2] [i_1 + 2]), (((/* implicit */unsigned long long int) arr_4 [i_2])))))))))));
                        }
                    } 
                } 
                arr_18 [(unsigned char)7] [13LL] [(signed char)9] = ((/* implicit */_Bool) (-(-2602155711603141520LL)));
            }
        } 
    } 
}
