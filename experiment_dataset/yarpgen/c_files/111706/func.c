/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 111706
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=111706 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/111706
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (long long int i_1 = 0; i_1 < 23; i_1 += 2) 
        {
            for (signed char i_2 = 1; i_2 < 20; i_2 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned int i_3 = 1; i_3 < 21; i_3 += 2) 
                    {
                        for (unsigned short i_4 = 0; i_4 < 23; i_4 += 1) 
                        {
                            {
                                var_11 = ((/* implicit */long long int) max((((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) (signed char)46)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)0))) : (7610667758855006904ULL))) < (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)4)))))), (((((/* implicit */_Bool) max((((/* implicit */unsigned short) var_2)), ((unsigned short)65523)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)25399))) : (((((/* implicit */_Bool) var_8)) ? (((/* implicit */unsigned long long int) 15U)) : (arr_0 [i_2] [i_3])))))));
                                arr_14 [i_3] = ((/* implicit */signed char) min((((/* implicit */int) arr_10 [i_2])), (((((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)65533))) : (2267985820628083935LL)))) ? (((((((/* implicit */int) (signed char)(-127 - 1))) + (2147483647))) << (((((/* implicit */int) arr_6 [i_0] [i_0] [i_0] [i_4])) - (8))))) : (((((/* implicit */_Bool) arr_4 [i_4])) ? (((/* implicit */int) arr_13 [i_2])) : (((/* implicit */int) (_Bool)1))))))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (int i_5 = 2; i_5 < 20; i_5 += 1) 
                    {
                        for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                        {
                            {
                                arr_20 [i_5] [i_5] [i_5] [i_5] [i_6] [i_5] = ((/* implicit */long long int) min(((unsigned short)4), (((/* implicit */unsigned short) (signed char)28))));
                                arr_21 [(signed char)20] [i_0] [(signed char)20] [i_5] [i_6] = arr_13 [(short)6];
                                arr_22 [i_5] [i_1] [i_1] = ((/* implicit */signed char) (~(var_3)));
                            }
                        } 
                    } 
                    arr_23 [i_2 + 2] [i_1] [i_1] [i_0] = ((/* implicit */unsigned char) (~(((((arr_13 [i_2]) ? (((/* implicit */int) arr_15 [i_0] [i_0] [i_0] [i_1] [i_2] [i_1])) : (((/* implicit */int) var_2)))) << (((max((var_8), (((/* implicit */int) (signed char)-28)))) + (32)))))));
                }
            } 
        } 
    } 
    var_12 = ((/* implicit */short) (unsigned char)234);
    var_13 = ((/* implicit */short) min((var_13), (((/* implicit */short) max((((/* implicit */long long int) (short)-10965)), (((((/* implicit */_Bool) 525422710)) ? ((-(var_7))) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)83))))))))));
    var_14 = ((/* implicit */short) ((max((((((/* implicit */_Bool) 1170643266)) ? (-1226720096) : (((/* implicit */int) (unsigned char)46)))), (((/* implicit */int) (short)-27074)))) - (((/* implicit */int) min((((/* implicit */unsigned short) (unsigned char)215)), ((unsigned short)65535))))));
    var_15 = ((/* implicit */unsigned long long int) max((((/* implicit */int) (signed char)-27)), (((((/* implicit */_Bool) -452438684)) ? (((/* implicit */int) ((((/* implicit */int) (_Bool)1)) <= (((/* implicit */int) (signed char)27))))) : (((/* implicit */int) (signed char)-25))))));
}
