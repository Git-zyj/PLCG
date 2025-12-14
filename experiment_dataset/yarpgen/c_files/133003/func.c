/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 133003
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=133003 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/133003
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
    var_15 = ((/* implicit */signed char) min((var_15), (((/* implicit */signed char) var_3))));
    var_16 = ((/* implicit */long long int) ((((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)-1)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) (_Bool)1))))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) 3542520013U)) ? (9U) : (((/* implicit */unsigned int) 0)))))))) == (((/* implicit */int) var_13))));
    var_17 = ((((/* implicit */_Bool) var_10)) ? (((/* implicit */unsigned long long int) ((var_12) ? (((/* implicit */unsigned int) (-(((/* implicit */int) var_11))))) : (((((/* implicit */_Bool) 752447284U)) ? (((/* implicit */unsigned int) var_6)) : (752447283U)))))) : (max((((/* implicit */unsigned long long int) var_3)), (((var_14) | (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)0))))))));
    var_18 = ((/* implicit */signed char) min((((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)31)) ? (var_10) : (((/* implicit */int) (signed char)120))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_1)) ? (var_10) : (((/* implicit */int) var_8))))) : (((((/* implicit */_Bool) 752447283U)) ? (var_14) : (((/* implicit */unsigned long long int) var_1)))))), (((/* implicit */unsigned long long int) var_10))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 17; i_0 += 1) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                arr_6 [i_0] = ((/* implicit */signed char) (((!(((/* implicit */_Bool) ((((/* implicit */_Bool) (short)-2686)) ? (((/* implicit */long long int) arr_2 [(short)7] [i_0])) : (arr_1 [i_1] [i_0])))))) ? ((((~(((/* implicit */int) (unsigned char)177)))) ^ (((((/* implicit */_Bool) arr_1 [i_0] [i_1])) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned short)50214)))))) : (((((/* implicit */int) arr_5 [i_1] [15] [i_0])) & (((/* implicit */int) arr_5 [i_1] [i_1] [i_0]))))));
                /* LoopNest 2 */
                for (signed char i_2 = 0; i_2 < 17; i_2 += 2) 
                {
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        {
                            arr_12 [i_3] [i_1] = ((/* implicit */unsigned char) min((((unsigned int) arr_2 [i_3] [i_0])), (((/* implicit */unsigned int) ((int) arr_2 [i_1] [i_2])))));
                            arr_13 [i_0] [i_2] [i_3] = ((/* implicit */signed char) (!(((/* implicit */_Bool) (+(((/* implicit */int) arr_5 [i_1] [i_2] [i_3])))))));
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (int i_4 = 0; i_4 < 17; i_4 += 2) 
                {
                    for (signed char i_5 = 0; i_5 < 17; i_5 += 1) 
                    {
                        {
                            var_19 = ((/* implicit */short) min((var_19), (((/* implicit */short) ((((/* implicit */int) ((_Bool) (-(((/* implicit */int) arr_15 [i_4])))))) + (max((((((/* implicit */int) arr_15 [i_4])) + (((/* implicit */int) arr_8 [i_0] [i_0] [i_0])))), (((/* implicit */int) ((arr_18 [15] [i_0] [i_4] [i_1] [i_0] [i_0]) < (((/* implicit */int) arr_11 [i_0]))))))))))));
                            arr_19 [i_0] [i_4] [(_Bool)1] [i_0] = ((/* implicit */_Bool) arr_10 [i_5] [i_0] [i_1] [i_0]);
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (signed char i_6 = 1; i_6 < 13; i_6 += 4) 
                {
                    for (unsigned short i_7 = 0; i_7 < 17; i_7 += 1) 
                    {
                        {
                            var_20 = ((((((/* implicit */int) ((((/* implicit */int) arr_15 [i_6])) >= (((/* implicit */int) (_Bool)1))))) + (((/* implicit */int) arr_20 [i_0] [16U] [i_6 + 3])))) - (((/* implicit */int) arr_7 [i_0] [i_1] [i_6 - 1])));
                            var_21 = ((/* implicit */int) max((var_21), (((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 92109042U)) ? (arr_1 [i_6 + 2] [i_6 + 4]) : (((/* implicit */long long int) (+(((/* implicit */int) arr_15 [i_7])))))))) ? (((((/* implicit */_Bool) max((((/* implicit */long long int) arr_7 [i_7] [i_6] [11])), (arr_23 [i_7] [i_6] [i_1] [i_0])))) ? (((((/* implicit */_Bool) 752447278U)) ? (332886619U) : (((/* implicit */unsigned int) arr_3 [i_0])))) : (((/* implicit */unsigned int) ((/* implicit */int) arr_16 [i_7] [i_6] [i_1] [i_0]))))) : (((/* implicit */unsigned int) ((/* implicit */int) arr_9 [i_0] [i_0] [i_6] [i_7]))))))));
                            arr_26 [i_7] [i_1] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 91860480U)) ? (-1583126508) : (((/* implicit */int) (unsigned char)234))))) && (((/* implicit */_Bool) (-(((/* implicit */int) (short)-9122)))))));
                            var_22 -= ((/* implicit */signed char) min((min((-1), (((/* implicit */int) (_Bool)1)))), (((/* implicit */int) ((((/* implicit */_Bool) arr_9 [i_6 + 3] [8ULL] [i_6 + 4] [i_6 + 2])) && (((/* implicit */_Bool) max(((short)-2660), ((short)2685)))))))));
                            var_23 = ((/* implicit */signed char) min((var_23), (((/* implicit */signed char) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) 461587815920257460ULL)) ? (((/* implicit */int) (signed char)17)) : (((/* implicit */int) (short)-10140))))) ? (((/* implicit */int) ((_Bool) arr_9 [i_0] [i_1] [i_6] [i_7]))) : (((((/* implicit */_Bool) -1416710613)) ? (((/* implicit */int) (unsigned short)54228)) : (((/* implicit */int) (_Bool)1)))))) == (((((/* implicit */_Bool) ((arr_24 [i_7] [i_0]) ? (arr_23 [i_7] [i_6] [i_1] [i_0]) : (((/* implicit */long long int) arr_0 [i_0] [i_7]))))) ? (((/* implicit */int) (signed char)-1)) : (((((/* implicit */_Bool) arr_9 [i_0] [i_0] [i_6] [i_7])) ? (((/* implicit */int) (signed char)68)) : (((/* implicit */int) arr_9 [i_0] [i_1] [i_0] [i_0])))))))))));
                        }
                    } 
                } 
            }
        } 
    } 
}
