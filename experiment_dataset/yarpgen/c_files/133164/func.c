/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 133164
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=133164 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/133164
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
    var_12 = ((/* implicit */unsigned short) max((max((((var_8) << (((/* implicit */int) var_4)))), ((+(((/* implicit */int) (unsigned char)127)))))), (((/* implicit */int) (!((!(((/* implicit */_Bool) var_2)))))))));
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 19; i_0 += 2) 
    {
        for (unsigned short i_1 = 0; i_1 < 21; i_1 += 3) 
        {
            {
                var_13 = ((/* implicit */unsigned short) arr_3 [i_1]);
                /* LoopSeq 2 */
                for (unsigned short i_2 = 0; i_2 < 21; i_2 += 3) 
                {
                    var_14 &= ((((/* implicit */_Bool) ((arr_2 [i_0 - 2] [i_0 + 2]) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) arr_2 [i_0 + 1] [i_0 - 2]))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)57160))))) : (((((/* implicit */_Bool) (unsigned short)58616)) ? (((/* implicit */int) arr_2 [i_0 + 1] [i_0 + 1])) : (((/* implicit */int) arr_2 [i_0 - 1] [i_0 - 3])))));
                    var_15 = ((/* implicit */unsigned short) (+(((((/* implicit */int) arr_6 [i_0 - 2] [i_0 - 3] [(unsigned short)9])) << (((((/* implicit */int) (unsigned short)57160)) - (57149)))))));
                    var_16 = ((/* implicit */unsigned short) max((var_16), (((/* implicit */unsigned short) arr_1 [2] [i_1]))));
                    var_17 = ((/* implicit */_Bool) max((min((var_8), (min((((/* implicit */int) (_Bool)1)), (arr_3 [i_0]))))), (((/* implicit */int) (unsigned short)8376))));
                }
                for (unsigned short i_3 = 0; i_3 < 21; i_3 += 2) 
                {
                    arr_12 [i_0] = ((/* implicit */int) max((max((17280240164386303168ULL), (((/* implicit */unsigned long long int) (unsigned short)8395)))), (((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_6 [i_0 + 1] [i_0 - 3] [i_0])))))));
                    var_18 = ((/* implicit */unsigned short) arr_1 [i_0] [i_0]);
                    var_19 &= ((/* implicit */short) 1166503909323248462ULL);
                }
                arr_13 [i_0] [(_Bool)1] &= ((/* implicit */_Bool) ((((((/* implicit */int) ((short) 14434423098544834364ULL))) << (min((((/* implicit */unsigned long long int) (_Bool)0)), (arr_10 [14] [i_0]))))) << (((((((/* implicit */int) ((arr_0 [(unsigned short)8] [(unsigned short)16]) > (((/* implicit */int) (_Bool)1))))) << (((((((/* implicit */_Bool) var_7)) ? (arr_3 [i_0]) : (((/* implicit */int) arr_6 [i_0] [i_1] [(unsigned short)5])))) - (836028622))))) - (536870908)))));
            }
        } 
    } 
}
