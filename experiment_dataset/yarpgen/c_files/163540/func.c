/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 163540
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=163540 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/163540
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
    for (signed char i_0 = 0; i_0 < 15; i_0 += 3) 
    {
        var_19 = ((/* implicit */_Bool) max((var_19), (((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) min(((unsigned short)20828), (((/* implicit */unsigned short) arr_0 [i_0])))))) * (var_14))))));
        arr_3 [(signed char)7] = ((/* implicit */unsigned short) (-(((/* implicit */int) (unsigned short)20821))));
        arr_4 [i_0] [i_0] = ((/* implicit */unsigned short) ((((((/* implicit */int) var_1)) > (((/* implicit */int) var_6)))) ? (7751058726682307052ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) (-(var_17)))) || (((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)44708))) <= (var_14)))))))));
    }
    for (int i_1 = 0; i_1 < 14; i_1 += 3) 
    {
        arr_9 [i_1] [i_1] = ((/* implicit */unsigned short) ((((var_10) + (((/* implicit */unsigned int) ((/* implicit */int) max(((_Bool)0), ((_Bool)1))))))) | (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [0])))));
        /* LoopNest 2 */
        for (unsigned long long int i_2 = 3; i_2 < 11; i_2 += 3) 
        {
            for (unsigned char i_3 = 1; i_3 < 11; i_3 += 4) 
            {
                {
                    var_20 ^= ((/* implicit */_Bool) arr_7 [i_2 - 3] [i_3]);
                    /* LoopNest 2 */
                    for (unsigned long long int i_4 = 0; i_4 < 14; i_4 += 4) 
                    {
                        for (short i_5 = 0; i_5 < 14; i_5 += 3) 
                        {
                            {
                                var_21 ^= ((/* implicit */unsigned short) ((((/* implicit */_Bool) (-(((((/* implicit */_Bool) var_3)) ? (((/* implicit */unsigned long long int) var_10)) : (arr_18 [i_2])))))) ? (arr_18 [i_5]) : (max((min((((/* implicit */unsigned long long int) (short)1016)), (5084109832709534496ULL))), (((/* implicit */unsigned long long int) max((((/* implicit */int) (unsigned char)60)), (var_2))))))));
                                arr_20 [i_1] [i_4] [i_1] [i_2] [i_1] = ((/* implicit */int) ((((arr_8 [i_1]) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)128))))) - (((/* implicit */unsigned long long int) ((/* implicit */int) arr_5 [i_1])))));
                                arr_21 [i_1] = ((/* implicit */short) min(((-(((/* implicit */int) arr_7 [i_1] [i_1])))), (((/* implicit */int) min((arr_1 [i_2 + 2] [i_2 + 3]), (((/* implicit */signed char) ((((/* implicit */unsigned long long int) var_10)) >= (arr_8 [i_1])))))))));
                            }
                        } 
                    } 
                }
            } 
        } 
        /* LoopNest 2 */
        for (unsigned short i_6 = 0; i_6 < 14; i_6 += 2) 
        {
            for (short i_7 = 0; i_7 < 14; i_7 += 3) 
            {
                {
                    /* LoopNest 2 */
                    for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
                    {
                        for (unsigned short i_9 = 0; i_9 < 14; i_9 += 3) 
                        {
                            {
                                arr_36 [i_6] &= ((/* implicit */long long int) (+(((/* implicit */int) (_Bool)0))));
                                var_22 = ((/* implicit */_Bool) max((var_22), ((!(((/* implicit */_Bool) arr_33 [i_1] [i_8] [i_7] [0ULL] [(_Bool)1] [i_9]))))));
                            }
                        } 
                    } 
                    var_23 = ((/* implicit */unsigned short) min((var_23), (((/* implicit */unsigned short) ((((/* implicit */int) min((arr_11 [i_1]), (arr_11 [i_7])))) != ((~(((/* implicit */int) arr_7 [i_6] [i_1])))))))));
                    var_24 = var_11;
                }
            } 
        } 
    }
    var_25 = ((/* implicit */unsigned int) min(((-(13362634241000017138ULL))), (((/* implicit */unsigned long long int) min((((((/* implicit */_Bool) 5822835820573964109LL)) ? (((/* implicit */int) var_6)) : (var_2))), (((/* implicit */int) (!(((/* implicit */_Bool) var_11))))))))));
    var_26 = ((/* implicit */short) (-(var_12)));
}
