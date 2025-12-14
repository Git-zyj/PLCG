/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 168992
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=168992 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/168992
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
    for (short i_0 = 0; i_0 < 20; i_0 += 3) 
    {
        for (unsigned long long int i_1 = 1; i_1 < 18; i_1 += 4) 
        {
            {
                arr_5 [12] [i_0] [i_1] = ((/* implicit */short) ((unsigned long long int) min(((short)-32485), ((short)32466))));
                var_12 = ((/* implicit */unsigned long long int) max((max((((((/* implicit */_Bool) (short)-32762)) ? (((/* implicit */int) (short)-32466)) : (((/* implicit */int) (short)32507)))), (((/* implicit */int) ((var_1) > (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_0] [i_1])))))))), (((/* implicit */int) (!(((/* implicit */_Bool) arr_4 [i_1 + 1] [i_1 + 1])))))));
                var_13 = ((((/* implicit */_Bool) (unsigned char)236)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (short)-260)));
                /* LoopNest 2 */
                for (unsigned long long int i_2 = 4; i_2 < 17; i_2 += 2) 
                {
                    for (unsigned char i_3 = 2; i_3 < 18; i_3 += 1) 
                    {
                        {
                            arr_13 [i_0] [i_0] [(short)10] = ((/* implicit */unsigned long long int) ((arr_4 [i_0] [i_3 + 1]) <= ((-(max((((/* implicit */unsigned long long int) (unsigned short)57008)), (arr_11 [i_0] [i_0] [i_0] [(_Bool)1] [i_0] [i_0])))))));
                            var_14 = ((/* implicit */short) max((var_14), (((/* implicit */short) ((((/* implicit */int) (((-(var_3))) > (((/* implicit */unsigned long long int) ((/* implicit */int) arr_6 [i_2] [i_1] [i_1 + 1] [i_2])))))) & (((/* implicit */int) ((494718020) == (((/* implicit */int) (unsigned short)8518))))))))));
                        }
                    } 
                } 
                var_15 = (((-(arr_1 [i_0]))) * ((+(arr_11 [i_1 - 1] [i_0] [i_0] [i_0] [i_0] [i_0]))));
            }
        } 
    } 
    var_16 = ((/* implicit */unsigned char) var_6);
    var_17 = ((/* implicit */short) var_2);
    var_18 = ((/* implicit */unsigned char) ((((((((/* implicit */_Bool) (short)31299)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_8))) : (var_1))) == (((((/* implicit */_Bool) var_4)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_10))) : (var_9))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_7))) : (((((/* implicit */_Bool) ((((/* implicit */int) var_8)) / (var_0)))) ? (((unsigned long long int) (short)32754)) : (var_11)))));
    var_19 = ((((/* implicit */_Bool) max((var_3), (((/* implicit */unsigned long long int) max((var_0), (((/* implicit */int) (_Bool)1)))))))) ? (((/* implicit */int) ((_Bool) max((var_1), (var_3))))) : (((((((/* implicit */int) var_10)) * (((/* implicit */int) (short)267)))) / (((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) (unsigned char)236)) : (611893650))))));
}
