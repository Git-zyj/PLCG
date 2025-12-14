/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 111351
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=111351 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/111351
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
    for (unsigned char i_0 = 0; i_0 < 10; i_0 += 4) 
    {
        for (unsigned short i_1 = 0; i_1 < 10; i_1 += 3) 
        {
            {
                var_15 -= ((((/* implicit */_Bool) min((((((/* implicit */_Bool) arr_2 [i_0] [3ULL])) ? (arr_0 [(unsigned char)9] [i_1]) : (((/* implicit */unsigned long long int) arr_4 [i_0] [i_1])))), (max((arr_0 [i_1] [i_0]), (((/* implicit */unsigned long long int) arr_3 [i_0] [i_0] [i_1]))))))) ? (max((((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_0 [i_1] [i_0]))))), (arr_1 [i_0]))) : (((((/* implicit */_Bool) arr_4 [i_0] [i_1])) ? (arr_2 [i_0] [i_1]) : (((/* implicit */unsigned long long int) ((arr_3 [7LL] [i_0] [i_1]) ? (((/* implicit */long long int) 4294967295U)) : (arr_4 [i_1] [i_1])))))));
                var_16 = ((/* implicit */unsigned char) max((max((((/* implicit */unsigned long long int) (unsigned short)13740)), (arr_0 [i_0] [i_0]))), ((+(arr_0 [0LL] [i_1])))));
                arr_5 [i_0] [i_1] = ((/* implicit */long long int) min((max((((((/* implicit */_Bool) arr_1 [i_0])) ? (arr_0 [i_1] [i_1]) : (arr_0 [i_1] [i_0]))), (arr_2 [i_1] [i_0]))), (((/* implicit */unsigned long long int) min((((/* implicit */long long int) ((arr_3 [i_0] [i_0] [i_0]) ? (((/* implicit */int) (unsigned short)53541)) : (((/* implicit */int) arr_3 [i_0] [i_1] [i_1]))))), (((arr_3 [i_0] [i_0] [(_Bool)1]) ? (arr_4 [i_0] [i_0]) : (((/* implicit */long long int) ((/* implicit */int) arr_3 [3] [i_0] [(unsigned char)8]))))))))));
                var_17 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) arr_4 [i_0] [i_1]))));
            }
        } 
    } 
    var_18 = ((/* implicit */unsigned long long int) var_5);
    var_19 = ((/* implicit */short) min((var_3), (((/* implicit */long long int) ((((/* implicit */_Bool) var_0)) ? (var_1) : (((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)51795))) ^ (var_0))))))));
    /* LoopNest 3 */
    for (unsigned short i_2 = 0; i_2 < 16; i_2 += 2) 
    {
        for (short i_3 = 0; i_3 < 16; i_3 += 2) 
        {
            for (unsigned char i_4 = 0; i_4 < 16; i_4 += 3) 
            {
                {
                    arr_14 [i_4] [i_3] [i_4] [i_3] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) min(((unsigned short)36173), (((/* implicit */unsigned short) (_Bool)1))))) ? (((/* implicit */int) (_Bool)1)) : (-1662665653)))) ? (max((((/* implicit */unsigned long long int) (unsigned char)86)), (15036560220677235516ULL))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((arr_8 [i_2] [i_3]), (arr_8 [i_2] [(_Bool)1])))) ? (((/* implicit */int) max(((_Bool)1), ((_Bool)1)))) : (((/* implicit */int) arr_7 [i_4])))))));
                    arr_15 [i_4] [i_3] [i_3] [i_2] |= (+(((((/* implicit */_Bool) arr_10 [i_2] [i_4])) ? (arr_10 [i_2] [i_3]) : (arr_10 [i_2] [i_2]))));
                    var_20 = ((/* implicit */int) ((((arr_6 [i_3]) ? (arr_13 [i_2] [i_2]) : (((/* implicit */int) arr_6 [i_2])))) < (((((/* implicit */_Bool) arr_13 [i_4] [i_3])) ? (((/* implicit */int) arr_11 [i_2] [i_3] [(_Bool)1])) : (((/* implicit */int) arr_6 [i_4]))))));
                }
            } 
        } 
    } 
    var_21 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_0)) ? (var_6) : (((/* implicit */int) var_12))))) ? ((-(((/* implicit */int) var_14)))) : (((/* implicit */int) (!(((/* implicit */_Bool) -8227806267148466667LL)))))))) ? (((/* implicit */int) var_14)) : (((((/* implicit */_Bool) (~(((/* implicit */int) var_12))))) ? (((/* implicit */int) (unsigned short)13740)) : (var_6)))));
}
