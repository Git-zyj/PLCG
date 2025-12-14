/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 167284
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=167284 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/167284
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
    /* LoopSeq 2 */
    for (unsigned char i_0 = 0; i_0 < 18; i_0 += 1) 
    {
        /* LoopNest 2 */
        for (unsigned int i_1 = 0; i_1 < 18; i_1 += 2) 
        {
            for (short i_2 = 1; i_2 < 15; i_2 += 2) 
            {
                {
                    /* LoopNest 2 */
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        for (unsigned short i_4 = 0; i_4 < 18; i_4 += 4) 
                        {
                            {
                                var_11 = ((/* implicit */int) min((min((((/* implicit */unsigned int) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) arr_8 [i_0] [i_0])) : (((/* implicit */int) (short)-6242))))), (arr_4 [i_0] [i_0] [i_0]))), (((/* implicit */unsigned int) min((((((/* implicit */int) (short)0)) << (((2100382808731987121LL) - (2100382808731987112LL))))), (((/* implicit */int) arr_1 [i_4])))))));
                                arr_12 [i_0] [i_0] [i_1] [i_2] [i_3] [i_0] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((unsigned short) var_2))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_7 [i_0] [i_1] [i_3] [i_4]))) : (var_7)));
                            }
                        } 
                    } 
                    var_12 -= ((/* implicit */_Bool) ((((/* implicit */_Bool) max((((((/* implicit */int) arr_7 [i_1] [i_1] [i_1] [i_2])) << (((((/* implicit */int) arr_5 [i_0])) - (20432))))), (((/* implicit */int) (short)0))))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)53712)) ? (((/* implicit */unsigned long long int) 577786258)) : (var_2)))) ? (((/* implicit */int) ((short) (_Bool)0))) : (((/* implicit */int) arr_3 [i_1]))))) : (((unsigned int) ((((/* implicit */_Bool) (unsigned short)0)) && (((/* implicit */_Bool) (short)0)))))));
                    var_13 = (i_0 % 2 == zero) ? (((/* implicit */long long int) (+(((/* implicit */int) ((((((((/* implicit */int) (short)-6242)) + (2147483647))) << (((((((/* implicit */int) arr_6 [i_0])) + (20114))) - (6))))) != (((((/* implicit */_Bool) arr_2 [i_1] [i_2])) ? (arr_2 [i_0] [i_0]) : (arr_2 [i_0] [i_0]))))))))) : (((/* implicit */long long int) (+(((/* implicit */int) ((((((((/* implicit */int) (short)-6242)) + (2147483647))) << (((((((((/* implicit */int) arr_6 [i_0])) + (20114))) - (6))) - (49652))))) != (((((/* implicit */_Bool) arr_2 [i_1] [i_2])) ? (arr_2 [i_0] [i_0]) : (arr_2 [i_0] [i_0])))))))));
                    /* LoopNest 2 */
                    for (long long int i_5 = 0; i_5 < 18; i_5 += 4) 
                    {
                        for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                        {
                            {
                                var_14 = ((/* implicit */signed char) (~(((/* implicit */int) min((((/* implicit */short) ((((/* implicit */int) (unsigned char)0)) <= (((/* implicit */int) var_8))))), (arr_5 [i_0]))))));
                                var_15 = ((/* implicit */short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)0)) ? (0ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_5)))))) ? (((/* implicit */int) max((((/* implicit */unsigned short) arr_1 [i_5])), ((unsigned short)23248)))) : (((arr_7 [i_0] [(unsigned short)5] [i_5] [i_6]) ? (((/* implicit */int) var_8)) : (((/* implicit */int) (short)0)))))))));
                                var_16 = ((/* implicit */unsigned int) max((var_16), (((/* implicit */unsigned int) ((((((/* implicit */_Bool) arr_16 [i_0] [i_1] [i_2 + 3] [i_5] [i_0] [i_2 + 3])) ? (min((((/* implicit */long long int) arr_16 [i_0] [i_0] [i_1] [i_5] [i_1] [i_1])), (arr_11 [i_0] [i_0] [i_2] [i_5] [i_6]))) : (((((/* implicit */_Bool) 16643771132730032573ULL)) ? (((/* implicit */long long int) ((/* implicit */int) var_5))) : (arr_11 [i_0] [i_6] [i_2] [i_5] [i_6]))))) / (((/* implicit */long long int) max((((/* implicit */int) (signed char)62)), (((int) (unsigned short)0))))))))));
                                arr_17 [i_0] [i_1] [i_0] [i_1] [i_6] = ((/* implicit */unsigned int) ((unsigned short) (signed char)59));
                                var_17 = ((/* implicit */unsigned short) ((unsigned long long int) max((((((/* implicit */_Bool) (unsigned short)23248)) ? (((/* implicit */int) arr_8 [i_0] [i_0])) : (var_3))), (((/* implicit */int) var_5)))));
                            }
                        } 
                    } 
                    var_18 = ((((/* implicit */_Bool) max((((/* implicit */unsigned int) ((((/* implicit */int) (_Bool)0)) == (arr_2 [(_Bool)1] [i_1])))), (min((var_7), (var_0)))))) ? (2100382808731987125LL) : (((/* implicit */long long int) ((/* implicit */int) var_4))));
                }
            } 
        } 
        /* LoopSeq 2 */
        for (long long int i_7 = 0; i_7 < 18; i_7 += 2) /* same iter space */
        {
            arr_20 [i_0] [i_0] [i_0] = ((/* implicit */unsigned int) var_10);
            arr_21 [i_0] = ((((/* implicit */_Bool) ((((/* implicit */int) arr_13 [i_0] [i_0] [i_0] [i_0])) << (((((/* implicit */int) (signed char)-63)) % (((/* implicit */int) arr_9 [i_0] [i_0] [i_0] [i_7]))))))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) -2069759436)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned short)56254))))) ? (((/* implicit */int) (short)3)) : (((((/* implicit */_Bool) -2100382808731987122LL)) ? (((/* implicit */int) (short)-3395)) : (((/* implicit */int) arr_6 [i_0]))))))) : (arr_14 [i_0] [i_0] [i_0] [i_0]));
        }
        for (long long int i_8 = 0; i_8 < 18; i_8 += 2) /* same iter space */
        {
            arr_24 [i_0] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) 0U))));
            arr_25 [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned int) arr_9 [i_0] [i_0] [i_8] [i_8]))) ? (((((/* implicit */long long int) ((/* implicit */int) arr_19 [i_0] [i_0] [i_0]))) ^ (-6527239917741091088LL))) : (((/* implicit */long long int) (((_Bool)1) ? (((/* implicit */int) var_5)) : (((/* implicit */int) arr_5 [i_0])))))))) ? (2100382808731987121LL) : (((/* implicit */long long int) max((((/* implicit */int) (_Bool)1)), (((arr_23 [i_0] [i_8] [i_8]) & (((/* implicit */int) arr_8 [i_0] [i_0])))))))));
        }
        arr_26 [i_0] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) max((arr_11 [i_0] [i_0] [i_0] [i_0] [i_0]), (((/* implicit */long long int) (+(((/* implicit */int) (_Bool)1)))))))) ? (((/* implicit */long long int) ((/* implicit */int) max((((/* implicit */signed char) (!(((/* implicit */_Bool) var_4))))), ((signed char)-63))))) : (max((((/* implicit */long long int) arr_1 [i_0])), (max((arr_11 [i_0] [i_0] [i_0] [i_0] [i_0]), (((/* implicit */long long int) -1700955715))))))));
        arr_27 [i_0] = ((/* implicit */unsigned long long int) (~(((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_11 [i_0] [i_0] [i_0] [5U] [i_0])) ? (((/* implicit */int) (unsigned short)33253)) : (((/* implicit */int) (unsigned short)39933))))) ? (((/* implicit */int) (signed char)-68)) : (((/* implicit */int) (unsigned char)253))))));
    }
    /* vectorizable */
    for (unsigned long long int i_9 = 0; i_9 < 22; i_9 += 4) 
    {
        arr_31 [i_9] = ((/* implicit */long long int) (-(((/* implicit */int) ((arr_28 [i_9] [i_9]) <= (-7610290162613320434LL))))));
        arr_32 [i_9] = ((/* implicit */short) var_10);
    }
    var_19 = var_2;
    var_20 = ((/* implicit */unsigned char) ((short) max((1280127897U), (min((var_0), (var_6))))));
}
