/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 157634
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=157634 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/157634
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
    var_15 = 1864028161U;
    var_16 = ((/* implicit */long long int) max((var_16), (((/* implicit */long long int) ((((/* implicit */_Bool) max((var_6), (((/* implicit */unsigned long long int) ((((/* implicit */int) (_Bool)1)) * (1557890850))))))) && (((/* implicit */_Bool) (((~(((/* implicit */int) var_0)))) & (var_10)))))))));
    var_17 = ((/* implicit */signed char) (unsigned short)29062);
    /* LoopNest 2 */
    for (unsigned char i_0 = 1; i_0 < 14; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 1; i_1 < 14; i_1 += 1) 
        {
            {
                /* LoopNest 3 */
                for (short i_2 = 1; i_2 < 14; i_2 += 3) 
                {
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        for (short i_4 = 0; i_4 < 15; i_4 += 4) 
                        {
                            {
                                var_18 -= ((/* implicit */unsigned int) (-(((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)36466))) * (11881505946020965376ULL)))));
                                var_19 += ((/* implicit */unsigned char) (~(1602218926999794097ULL)));
                                var_20 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_1 - 1] [i_4])) ? (7579047155484297963LL) : (((/* implicit */long long int) ((/* implicit */int) arr_0 [i_0 - 1] [7ULL])))))) ? (((int) (unsigned short)36475)) : (((/* implicit */int) ((3040641542U) != (((/* implicit */unsigned int) ((/* implicit */int) (short)-25813))))))));
                            }
                        } 
                    } 
                } 
                var_21 = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */int) (short)12618)) * (((/* implicit */int) arr_5 [i_1 - 1] [i_1] [i_1]))))) ? (((/* implicit */long long int) ((/* implicit */int) var_14))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_5)) ? (1320424925133074791ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)12633)))))) ? (min((((/* implicit */long long int) (_Bool)1)), (7069581432822889311LL))) : (-6841486471423811250LL)))));
                var_22 += ((/* implicit */unsigned long long int) (unsigned char)184);
                arr_14 [i_0] = ((/* implicit */unsigned int) ((((/* implicit */long long int) ((unsigned int) ((((arr_6 [i_0] [i_1] [i_0 + 1] [i_0]) + (2147483647))) << (((((var_5) + (7913931417033766389LL))) - (10LL))))))) - (arr_4 [i_1])));
            }
        } 
    } 
    var_23 -= ((/* implicit */_Bool) ((max(((~(((/* implicit */int) (_Bool)1)))), (((/* implicit */int) var_13)))) >> (max((((/* implicit */long long int) var_7)), (var_12)))));
}
