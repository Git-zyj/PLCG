/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 155505
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=155505 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/155505
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
    var_13 = ((/* implicit */short) ((min((((unsigned int) (_Bool)1)), (((/* implicit */unsigned int) (+(((/* implicit */int) (signed char)-13))))))) % (((unsigned int) var_5))));
    var_14 = ((/* implicit */unsigned int) ((((/* implicit */unsigned int) ((/* implicit */int) max((var_2), (((/* implicit */unsigned short) var_1)))))) == (var_0)));
    /* LoopSeq 2 */
    for (signed char i_0 = 0; i_0 < 17; i_0 += 4) 
    {
        var_15 = ((/* implicit */short) ((((/* implicit */_Bool) 7292127013021601842LL)) ? (((/* implicit */long long int) ((/* implicit */int) (short)-5))) : (((long long int) (_Bool)1))));
        var_16 = ((/* implicit */unsigned long long int) ((((((/* implicit */unsigned int) ((/* implicit */int) (short)-5))) & (21U))) > (((/* implicit */unsigned int) (-(((/* implicit */int) (short)0)))))));
        arr_2 [i_0] = ((/* implicit */int) (~(((unsigned int) var_0))));
        arr_3 [i_0] = ((/* implicit */unsigned short) ((max((((/* implicit */long long int) 13U)), (var_7))) <= (((/* implicit */long long int) ((/* implicit */int) ((_Bool) var_3))))));
    }
    for (unsigned char i_1 = 0; i_1 < 18; i_1 += 2) 
    {
        arr_8 [i_1] = ((/* implicit */short) ((long long int) ((((var_8) & (((/* implicit */unsigned long long int) 0U)))) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) ((_Bool) var_0)))))));
        /* LoopNest 2 */
        for (int i_2 = 0; i_2 < 18; i_2 += 3) 
        {
            for (signed char i_3 = 3; i_3 < 16; i_3 += 2) 
            {
                {
                    var_17 ^= ((/* implicit */unsigned int) (+(min((35184372088832ULL), (((/* implicit */unsigned long long int) var_11))))));
                    /* LoopNest 2 */
                    for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                    {
                        for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                        {
                            {
                                var_18 *= ((/* implicit */unsigned char) min((((/* implicit */long long int) ((unsigned short) 0U))), (((-4543991417139961861LL) + (((/* implicit */long long int) ((/* implicit */int) (signed char)-104)))))));
                                arr_21 [i_1] [i_1] [i_1] [i_1] [i_2] = ((/* implicit */unsigned int) (!(((((/* implicit */int) var_5)) == (((/* implicit */int) var_4))))));
                                arr_22 [i_1] [i_2] [i_3] = ((/* implicit */long long int) var_12);
                            }
                        } 
                    } 
                    var_19 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((var_0) + (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)65525)))))) && (((/* implicit */_Bool) (+(((/* implicit */int) min((((/* implicit */unsigned char) var_5)), (var_1)))))))));
                    var_20 *= ((/* implicit */unsigned int) var_8);
                }
            } 
        } 
    }
    var_21 = ((/* implicit */_Bool) min(((unsigned char)121), (((/* implicit */unsigned char) (_Bool)1))));
    var_22 = ((/* implicit */int) min((-1705880015061085394LL), (((/* implicit */long long int) 4294967295U))));
}
