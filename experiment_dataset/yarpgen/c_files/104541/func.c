/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 104541
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=104541 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/104541
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
    /* LoopNest 3 */
    for (long long int i_0 = 0; i_0 < 24; i_0 += 3) 
    {
        for (unsigned int i_1 = 0; i_1 < 24; i_1 += 2) 
        {
            for (long long int i_2 = 1; i_2 < 21; i_2 += 2) 
            {
                {
                    /* LoopSeq 2 */
                    for (short i_3 = 0; i_3 < 24; i_3 += 2) 
                    {
                        /* LoopSeq 2 */
                        for (unsigned char i_4 = 0; i_4 < 24; i_4 += 3) /* same iter space */
                        {
                            var_13 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (~(((((/* implicit */_Bool) 2313321172400249648ULL)) ? (var_7) : (((/* implicit */long long int) arr_12 [i_2] [i_1] [i_1] [i_3] [i_4]))))))) ? (((((/* implicit */long long int) ((((/* implicit */_Bool) arr_15 [i_4] [i_2] [i_1])) ? (((/* implicit */int) arr_4 [i_2] [i_3] [i_4])) : (((/* implicit */int) var_6))))) + (var_12))) : (((/* implicit */long long int) ((((/* implicit */int) max((var_3), (var_3)))) << (((((((/* implicit */_Bool) (short)5)) ? (((/* implicit */long long int) ((/* implicit */int) (short)-20))) : (var_10))) + (25LL))))))));
                            var_14 = ((/* implicit */unsigned long long int) ((unsigned short) ((unsigned char) arr_4 [i_0] [i_2 + 2] [i_2 + 3])));
                            var_15 = ((/* implicit */unsigned int) ((unsigned short) (_Bool)1));
                        }
                        for (unsigned char i_5 = 0; i_5 < 24; i_5 += 3) /* same iter space */
                        {
                            var_16 = ((/* implicit */signed char) ((var_6) ? (arr_3 [i_3]) : (((/* implicit */unsigned int) ((/* implicit */int) var_3)))));
                            var_17 |= ((/* implicit */unsigned short) (signed char)-27);
                        }
                        arr_18 [i_2] [i_2] [19LL] [i_2] = ((/* implicit */_Bool) var_10);
                        var_18 -= ((/* implicit */unsigned char) 3326315636U);
                        arr_19 [i_0] [i_0] [i_0] [i_1] [i_2] [i_3] = ((/* implicit */short) ((((/* implicit */_Bool) ((unsigned int) ((((/* implicit */_Bool) var_8)) ? (var_11) : (((/* implicit */long long int) ((/* implicit */int) var_2))))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_12)) ? (6699727085664038549LL) : (((/* implicit */long long int) ((/* implicit */int) var_9))))))))) : (((((/* implicit */_Bool) max((((/* implicit */long long int) arr_0 [i_0])), (var_7)))) ? (((/* implicit */int) ((-241280165902671649LL) > (var_10)))) : (((/* implicit */int) ((((/* implicit */int) var_6)) >= (((/* implicit */int) var_2)))))))));
                    }
                    for (unsigned int i_6 = 0; i_6 < 24; i_6 += 2) 
                    {
                        var_19 += ((/* implicit */short) var_12);
                        var_20 = ((/* implicit */signed char) arr_11 [i_2 - 1] [i_1] [i_2 - 1] [i_0]);
                        var_21 ^= ((/* implicit */signed char) -4508171109576721536LL);
                        arr_23 [i_0] [i_0] [i_2] [i_2 + 2] [i_6] [i_6] = ((/* implicit */signed char) (!(((/* implicit */_Bool) arr_1 [i_2 + 3]))));
                    }
                    var_22 = ((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) max((arr_10 [i_0] [i_1] [i_2 - 1] [i_1]), (arr_10 [i_0] [i_1] [i_2 + 2] [i_0]))))) * (((unsigned int) var_12))));
                    /* LoopNest 2 */
                    for (short i_7 = 1; i_7 < 23; i_7 += 3) 
                    {
                        for (unsigned int i_8 = 0; i_8 < 24; i_8 += 1) 
                        {
                            {
                                arr_30 [i_2] [i_7] [i_2] = ((/* implicit */long long int) ((((/* implicit */_Bool) min((((/* implicit */signed char) ((arr_8 [i_8] [i_2]) != (((/* implicit */unsigned int) ((/* implicit */int) arr_20 [i_0])))))), ((signed char)-125)))) ? (((/* implicit */int) ((unsigned char) var_12))) : (((/* implicit */int) var_9))));
                                var_23 = ((/* implicit */unsigned int) var_1);
                                var_24 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_10)) ? (arr_3 [i_1]) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)255)))))) ? (((/* implicit */int) (short)-5)) : (((/* implicit */int) ((((/* implicit */_Bool) var_7)) && (((/* implicit */_Bool) var_10)))))))) ? (max((((((/* implicit */int) arr_4 [i_1] [i_1] [i_7])) - (((/* implicit */int) (signed char)-61)))), (((/* implicit */int) var_6)))) : (((((var_7) == (((/* implicit */long long int) var_0)))) ? (((/* implicit */int) ((unsigned short) var_1))) : (((/* implicit */int) ((((/* implicit */_Bool) var_0)) || (((/* implicit */_Bool) arr_24 [i_0] [i_1] [i_2 + 3] [i_7] [i_7] [i_7])))))))));
                                var_25 = ((_Bool) ((((/* implicit */_Bool) (unsigned short)24630)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) var_2))));
                                var_26 = var_6;
                            }
                        } 
                    } 
                    var_27 = ((/* implicit */_Bool) max((var_27), (((/* implicit */_Bool) var_0))));
                    /* LoopNest 2 */
                    for (short i_9 = 2; i_9 < 23; i_9 += 3) 
                    {
                        for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) 
                        {
                            {
                                var_28 = ((/* implicit */signed char) ((((/* implicit */int) (unsigned char)247)) * (((/* implicit */int) ((((/* implicit */int) arr_28 [i_0] [i_1] [(short)20] [i_9] [i_2 + 2])) > (((/* implicit */int) arr_34 [i_2 + 1] [i_1] [i_2 - 1] [i_2 - 1] [i_10] [i_0])))))));
                                var_29 = ((/* implicit */long long int) min((max((((arr_3 [i_10]) / (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-26))))), (((/* implicit */unsigned int) ((((/* implicit */int) var_2)) > (((/* implicit */int) arr_24 [i_0] [i_2] [i_2 + 2] [i_10] [i_0] [i_10]))))))), (((unsigned int) (-(((/* implicit */int) (unsigned char)255)))))));
                                var_30 = ((/* implicit */short) ((((/* implicit */long long int) arr_0 [i_0])) & (max((((/* implicit */long long int) ((unsigned char) var_1))), (min((var_12), (((/* implicit */long long int) arr_3 [i_9 - 1]))))))));
                                var_31 = ((/* implicit */long long int) (~(((/* implicit */int) ((((/* implicit */_Bool) max((arr_8 [i_2] [i_2]), (((/* implicit */unsigned int) (unsigned char)255))))) || (((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) var_6))) % (var_12)))))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_32 = ((/* implicit */unsigned char) var_10);
}
