/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 16473
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=16473 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/16473
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
    /* LoopSeq 4 */
    for (short i_0 = 0; i_0 < 11; i_0 += 3) /* same iter space */
    {
        var_19 = ((/* implicit */short) ((((/* implicit */_Bool) (short)13086)) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) (short)-7841))));
        arr_3 [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */int) (!(((/* implicit */_Bool) ((arr_0 [i_0]) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [(_Bool)1]))) : (var_13))))))) | ((-(((/* implicit */int) (signed char)-1))))));
    }
    for (short i_1 = 0; i_1 < 11; i_1 += 3) /* same iter space */
    {
        arr_6 [i_1] = ((/* implicit */short) ((((/* implicit */_Bool) var_0)) ? ((-(var_7))) : (((/* implicit */long long int) ((/* implicit */int) arr_0 [7])))));
        arr_7 [i_1] = ((/* implicit */short) ((((/* implicit */_Bool) (short)-7604)) ? (((/* implicit */int) min(((short)4095), (((/* implicit */short) (unsigned char)128))))) : (min(((-(511))), (((/* implicit */int) (unsigned short)65535))))));
    }
    for (short i_2 = 0; i_2 < 11; i_2 += 3) /* same iter space */
    {
        /* LoopSeq 2 */
        for (unsigned long long int i_3 = 0; i_3 < 11; i_3 += 4) 
        {
            var_20 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (+(var_16)))) ? (((/* implicit */int) arr_8 [i_2])) : (((/* implicit */int) ((_Bool) var_10)))));
            arr_15 [i_2] [i_2] = ((/* implicit */short) ((((/* implicit */_Bool) (((_Bool)1) ? (-1) : (((/* implicit */int) (_Bool)1))))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_5 [i_2]))) : ((+(max((((/* implicit */unsigned int) (short)-30125)), (3U)))))));
        }
        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
        {
            var_21 = ((/* implicit */int) min((var_21), (((/* implicit */int) max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (signed char)8)) ? (5644546515373578163LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)46719)))))), ((+(((((/* implicit */_Bool) -5644546515373578143LL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_11 [i_4]))) : (var_4))))))))));
            var_22 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned short) (short)23035))) ? (((/* implicit */int) (unsigned short)65531)) : (1969817628)))) ? (((/* implicit */unsigned long long int) min((((/* implicit */int) (short)5657)), (((((/* implicit */_Bool) arr_13 [i_2] [i_2] [i_4])) ? (((/* implicit */int) (signed char)127)) : (((/* implicit */int) var_2))))))) : (max((((/* implicit */unsigned long long int) var_6)), (arr_13 [i_2] [i_2] [i_2])))));
        }
        arr_19 [i_2] = ((/* implicit */unsigned long long int) ((short) ((var_18) ^ (((/* implicit */long long int) ((/* implicit */int) arr_16 [i_2] [8ULL] [i_2]))))));
        var_23 = ((/* implicit */int) var_17);
    }
    for (short i_5 = 0; i_5 < 11; i_5 += 3) /* same iter space */
    {
        /* LoopNest 2 */
        for (int i_6 = 0; i_6 < 11; i_6 += 4) 
        {
            for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
            {
                {
                    /* LoopSeq 1 */
                    for (unsigned char i_8 = 0; i_8 < 11; i_8 += 2) 
                    {
                        var_24 = ((/* implicit */signed char) (+(((/* implicit */int) (_Bool)0))));
                        arr_31 [i_7] = ((/* implicit */unsigned int) ((unsigned short) (-(((((/* implicit */_Bool) 1969817628)) ? (arr_9 [i_5]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_28 [i_7] [i_7] [i_8]))))))));
                    }
                    arr_32 [i_7] [i_5] = ((/* implicit */_Bool) (+(((((/* implicit */_Bool) -9220037272092577152LL)) ? (((/* implicit */long long int) ((/* implicit */int) (short)8))) : (0LL)))));
                }
            } 
        } 
        var_25 = ((/* implicit */long long int) (+(((/* implicit */int) arr_5 [i_5]))));
        arr_33 [i_5] [i_5] = ((/* implicit */short) (+(var_7)));
    }
    var_26 = ((/* implicit */unsigned long long int) var_12);
    /* LoopNest 2 */
    for (short i_9 = 0; i_9 < 22; i_9 += 3) 
    {
        for (signed char i_10 = 0; i_10 < 22; i_10 += 2) 
        {
            {
                arr_42 [i_9] [i_10] = ((/* implicit */unsigned short) var_5);
                var_27 = ((/* implicit */unsigned short) max((((signed char) (short)8)), (((/* implicit */signed char) (_Bool)1))));
            }
        } 
    } 
    var_28 = ((/* implicit */unsigned long long int) var_10);
}
