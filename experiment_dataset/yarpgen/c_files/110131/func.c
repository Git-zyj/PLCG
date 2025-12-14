/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 110131
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=110131 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/110131
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
    for (unsigned long long int i_0 = 1; i_0 < 17; i_0 += 2) 
    {
        for (long long int i_1 = 2; i_1 < 16; i_1 += 3) 
        {
            for (long long int i_2 = 0; i_2 < 18; i_2 += 2) 
            {
                {
                    /* LoopNest 2 */
                    for (long long int i_3 = 1; i_3 < 15; i_3 += 1) 
                    {
                        for (short i_4 = 1; i_4 < 17; i_4 += 2) 
                        {
                            {
                                var_18 = ((/* implicit */unsigned short) ((_Bool) (unsigned short)11693));
                                var_19 = ((/* implicit */long long int) ((((/* implicit */_Bool) max((arr_7 [i_0] [i_0]), (((/* implicit */long long int) (!(arr_11 [i_0 - 1] [(signed char)13]))))))) && ((!(((/* implicit */_Bool) (unsigned short)48303))))));
                                var_20 = ((/* implicit */int) ((((((/* implicit */_Bool) arr_10 [i_4 + 1] [i_4 + 1] [i_4] [i_4 - 1] [i_4 - 1])) ? (var_6) : (((/* implicit */long long int) arr_10 [i_3 + 1] [i_1] [(_Bool)1] [i_0] [11])))) > (min((min((((/* implicit */long long int) (short)1240)), (-2112519262975829438LL))), (((/* implicit */long long int) (!(((/* implicit */_Bool) var_2)))))))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (short i_5 = 3; i_5 < 16; i_5 += 3) 
                    {
                        for (int i_6 = 1; i_6 < 17; i_6 += 2) 
                        {
                            {
                                var_21 = ((/* implicit */short) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)-21677))) : (((((/* implicit */_Bool) ((unsigned long long int) arr_16 [(unsigned char)5] [i_0] [i_2] [17] [i_6]))) ? (((/* implicit */unsigned int) var_5)) : (arr_14 [(unsigned short)16] [i_5] [(unsigned short)16] [i_1] [i_0])))));
                                arr_17 [i_6] [i_1] [(unsigned char)4] [(short)16] [i_1] [i_1] = ((/* implicit */int) var_16);
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (short i_7 = 0; i_7 < 18; i_7 += 2) 
                    {
                        for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
                        {
                            {
                                var_22 = ((/* implicit */unsigned short) 2112519262975829444LL);
                                arr_23 [6] [(_Bool)1] [i_2] [i_2] [3LL] = arr_5 [i_8];
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_23 = ((/* implicit */short) max((((/* implicit */unsigned int) min(((short)-1), ((short)32767)))), ((-(((((/* implicit */_Bool) -2112519262975829445LL)) ? (var_7) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)20)))))))));
    var_24 = ((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) ((((-684355016362201614LL) / (((/* implicit */long long int) var_4)))) == (var_6)))), (((3526506993U) & (((/* implicit */unsigned int) ((((/* implicit */int) var_16)) | (((/* implicit */int) var_10)))))))));
    /* LoopSeq 1 */
    for (unsigned short i_9 = 4; i_9 < 20; i_9 += 3) 
    {
        var_25 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((((/* implicit */_Bool) arr_25 [i_9])) ? (var_9) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_1))))) / (((/* implicit */unsigned long long int) (-(-1))))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned short) ((((/* implicit */_Bool) (unsigned char)202)) ? (((/* implicit */int) (short)2)) : (((/* implicit */int) (unsigned char)8))))))) : (((((/* implicit */_Bool) (+(((/* implicit */int) (short)15))))) ? (((((/* implicit */_Bool) (short)401)) ? (((/* implicit */unsigned long long int) -684355016362201602LL)) : (arr_24 [7LL] [i_9]))) : (((/* implicit */unsigned long long int) ((((/* implicit */int) var_12)) - (((/* implicit */int) var_11)))))))));
        arr_27 [i_9] = ((/* implicit */_Bool) var_3);
        arr_28 [i_9] = ((/* implicit */signed char) (+(var_7)));
        var_26 = ((/* implicit */unsigned char) min((((/* implicit */unsigned int) ((((((/* implicit */_Bool) var_17)) ? (-684355016362201598LL) : (((/* implicit */long long int) var_4)))) == (2112519262975829444LL)))), (var_7)));
    }
}
