/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 172917
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=172917 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/172917
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
    var_16 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) (short)32750)) : (((/* implicit */int) var_2))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (short)9612)) ? (((/* implicit */int) (short)32767)) : (((/* implicit */int) (short)(-32767 - 1)))))) : (max((var_12), (((/* implicit */unsigned long long int) var_6)))))))));
    var_17 = ((/* implicit */unsigned short) max((var_17), (((/* implicit */unsigned short) (!(((/* implicit */_Bool) max(((-(((/* implicit */int) (short)-32759)))), ((~(((/* implicit */int) var_0))))))))))));
    var_18 = ((/* implicit */unsigned int) min((var_18), (((/* implicit */unsigned int) ((((/* implicit */_Bool) max((((/* implicit */int) max((var_3), (((/* implicit */unsigned short) var_5))))), (((((/* implicit */_Bool) (short)7)) ? (((/* implicit */int) (short)(-32767 - 1))) : (((/* implicit */int) var_2))))))) ? (((/* implicit */int) var_15)) : (((((/* implicit */_Bool) (~(((/* implicit */int) (short)-19640))))) ? (((/* implicit */int) ((signed char) var_5))) : (((/* implicit */int) var_8)))))))));
    /* LoopNest 2 */
    for (signed char i_0 = 0; i_0 < 14; i_0 += 2) 
    {
        for (unsigned int i_1 = 0; i_1 < 14; i_1 += 2) 
        {
            {
                /* LoopNest 2 */
                for (unsigned long long int i_2 = 0; i_2 < 14; i_2 += 2) 
                {
                    for (unsigned char i_3 = 2; i_3 < 11; i_3 += 2) 
                    {
                        {
                            var_19 = ((/* implicit */signed char) ((((/* implicit */_Bool) max((((/* implicit */unsigned short) (short)-7)), (arr_6 [(signed char)6] [i_1] [i_2] [i_3])))) ? (max(((+(((/* implicit */int) (unsigned char)17)))), ((~(((/* implicit */int) arr_2 [i_0])))))) : (((/* implicit */int) ((short) min((((/* implicit */unsigned short) arr_4 [i_3] [i_2])), ((unsigned short)7336)))))));
                            arr_10 [i_0] [12U] [i_2] [i_2] [i_3] &= ((/* implicit */signed char) (+(max((((/* implicit */unsigned int) arr_1 [i_1] [i_2])), (((((/* implicit */_Bool) arr_6 [i_2] [i_1] [i_2] [i_0])) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)32753))) : (913178607U)))))));
                            var_20 = ((/* implicit */signed char) max((var_20), (((/* implicit */signed char) max(((-((+(((/* implicit */int) arr_3 [i_3 - 1])))))), ((~(((/* implicit */int) arr_3 [i_0])))))))));
                        }
                    } 
                } 
                arr_11 [i_0] [i_0] [i_0] = ((/* implicit */short) max((max((((/* implicit */int) arr_2 [i_1])), (((((/* implicit */_Bool) arr_8 [i_0] [i_0] [i_1] [i_1] [(signed char)11] [9U])) ? (((/* implicit */int) arr_9 [i_0] [i_0] [i_0] [i_0] [i_1] [i_0])) : (((/* implicit */int) arr_7 [i_0] [i_1])))))), (((/* implicit */int) (unsigned char)147))));
                /* LoopSeq 1 */
                for (short i_4 = 0; i_4 < 14; i_4 += 2) 
                {
                    var_21 = ((/* implicit */unsigned short) ((((/* implicit */unsigned int) (~((+(((/* implicit */int) arr_7 [i_4] [i_1]))))))) >= (3381788689U)));
                    var_22 = ((/* implicit */unsigned long long int) min((var_22), (((/* implicit */unsigned long long int) (-(((/* implicit */int) ((((/* implicit */int) (short)31848)) < (((/* implicit */int) min((((/* implicit */short) arr_3 [i_4])), ((short)7))))))))))));
                    arr_15 [i_4] |= ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((short) arr_3 [i_0]))) ? (((/* implicit */int) arr_3 [i_4])) : (((/* implicit */int) min(((short)-19646), ((short)-13823))))))) ? (((((/* implicit */unsigned int) ((/* implicit */int) ((signed char) arr_6 [i_4] [i_1] [i_1] [i_0])))) ^ (((((/* implicit */_Bool) (short)31848)) ? (913178607U) : (((/* implicit */unsigned int) ((/* implicit */int) (short)13822))))))) : (132322826U)));
                    var_23 = ((/* implicit */short) (+(((/* implicit */int) ((unsigned char) (-(((/* implicit */int) arr_0 [i_4]))))))));
                }
                var_24 = ((/* implicit */short) (-((-(913178587U)))));
            }
        } 
    } 
}
