/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 165791
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=165791 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/165791
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
    var_12 |= ((/* implicit */unsigned char) (((-(((/* implicit */int) (_Bool)1)))) | (((/* implicit */int) var_9))));
    /* LoopSeq 3 */
    for (unsigned short i_0 = 0; i_0 < 13; i_0 += 2) 
    {
        arr_2 [i_0] = ((/* implicit */_Bool) var_2);
        arr_3 [i_0] = ((/* implicit */unsigned short) max((arr_1 [i_0]), ((+(max((-869591284), (((/* implicit */int) arr_0 [i_0]))))))));
        arr_4 [i_0] = ((/* implicit */long long int) min((((/* implicit */unsigned long long int) min((-1435010501), (((/* implicit */int) min((((/* implicit */unsigned short) (unsigned char)9)), ((unsigned short)31))))))), ((+(6890981555291728650ULL)))));
    }
    for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) /* same iter space */
    {
        arr_9 [i_1] = ((/* implicit */long long int) arr_8 [i_1]);
        arr_10 [i_1] = ((/* implicit */long long int) (!(((/* implicit */_Bool) (-(((((/* implicit */_Bool) arr_5 [i_1])) ? (((/* implicit */int) (short)24405)) : (var_5))))))));
        arr_11 [i_1] = ((/* implicit */signed char) var_4);
        arr_12 [i_1] = ((/* implicit */int) (unsigned char)200);
        arr_13 [i_1] = ((/* implicit */unsigned long long int) arr_8 [i_1]);
    }
    for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) /* same iter space */
    {
        arr_17 [i_2] [i_2] = ((/* implicit */signed char) (-((((-(var_8))) / (((/* implicit */int) arr_7 [i_2]))))));
        arr_18 [i_2] [i_2] = ((/* implicit */_Bool) (-(min((((/* implicit */unsigned long long int) var_9)), (arr_16 [i_2])))));
        /* LoopNest 2 */
        for (unsigned char i_3 = 0; i_3 < 20; i_3 += 3) 
        {
            for (int i_4 = 0; i_4 < 20; i_4 += 3) 
            {
                {
                    arr_25 [i_3] [i_4] = ((/* implicit */unsigned long long int) max((min((((((/* implicit */_Bool) -1870482542)) ? (arr_6 [i_3]) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)20))))), (arr_22 [i_3] [i_4]))), (((/* implicit */unsigned int) (unsigned short)23))));
                    arr_26 [i_2] [i_2] [i_2] = ((/* implicit */long long int) ((((/* implicit */long long int) ((((/* implicit */_Bool) max((((/* implicit */unsigned int) arr_8 [i_4])), (arr_22 [i_2] [i_4])))) ? ((-(1764456823U))) : (((/* implicit */unsigned int) (+(((/* implicit */int) arr_19 [i_4] [i_4] [i_4])))))))) != (min((((/* implicit */long long int) (_Bool)1)), (((arr_5 [i_2]) | (var_10)))))));
                    arr_27 [i_2] [i_3] [i_4] [i_4] = ((/* implicit */unsigned int) (~((~(var_11)))));
                }
            } 
        } 
        arr_28 [i_2] = ((/* implicit */unsigned int) var_11);
        arr_29 [i_2] = ((/* implicit */long long int) arr_8 [i_2]);
    }
    var_13 = ((/* implicit */unsigned long long int) (-(((((/* implicit */_Bool) var_4)) ? (((/* implicit */unsigned int) var_11)) : ((-(var_3)))))));
}
