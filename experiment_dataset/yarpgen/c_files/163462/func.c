/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 163462
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=163462 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/163462
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
    for (int i_0 = 0; i_0 < 22; i_0 += 4) 
    {
        for (int i_1 = 4; i_1 < 20; i_1 += 2) 
        {
            {
                /* LoopNest 2 */
                for (long long int i_2 = 0; i_2 < 22; i_2 += 1) 
                {
                    for (unsigned char i_3 = 2; i_3 < 20; i_3 += 4) 
                    {
                        {
                            arr_8 [6] [i_2] [i_2] [i_0] [i_0] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) min((((/* implicit */long long int) (-(((/* implicit */int) var_2))))), (((((/* implicit */_Bool) arr_6 [i_2] [i_2] [i_1] [i_2])) ? (var_4) : (((/* implicit */long long int) ((/* implicit */int) arr_5 [i_2] [i_2] [i_0] [i_2]))))))))));
                            var_12 -= ((unsigned char) (-(min((((/* implicit */unsigned int) (short)-4246)), (arr_0 [6] [i_1])))));
                            /* LoopSeq 1 */
                            for (short i_4 = 1; i_4 < 19; i_4 += 3) 
                            {
                                var_13 ^= ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */int) (short)4246)) | ((-(((/* implicit */int) (short)4245))))))) ? (((/* implicit */int) arr_1 [i_3])) : ((-(((((/* implicit */_Bool) (short)4246)) ? (((/* implicit */int) (short)0)) : (473819234)))))));
                                var_14 = ((/* implicit */unsigned short) min((var_14), (((/* implicit */unsigned short) min((-473819238), (((/* implicit */int) (_Bool)1)))))));
                            }
                            /* LoopSeq 2 */
                            for (short i_5 = 4; i_5 < 20; i_5 += 3) 
                            {
                                var_15 = ((/* implicit */_Bool) max((var_15), (((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned int) arr_7 [i_0] [i_0] [i_1]))) ? ((((-(((/* implicit */int) (unsigned char)106)))) | (((/* implicit */int) min(((short)4231), (((/* implicit */short) (unsigned char)59))))))) : (((/* implicit */int) arr_5 [i_1 - 2] [i_5 - 4] [i_5] [i_3])))))));
                                arr_13 [i_0] [i_0] [i_2] [(unsigned short)3] [(short)5] [i_3 - 2] [i_5 - 2] = ((/* implicit */signed char) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) (unsigned char)100))))) ? (min((-473819212), (((/* implicit */int) (unsigned char)197)))) : (((/* implicit */int) arr_6 [i_2] [i_0] [i_2] [i_0])))) <= (((/* implicit */int) var_1))));
                                var_16 = ((/* implicit */unsigned int) ((signed char) ((var_4) < (var_4))));
                                var_17 ^= ((/* implicit */unsigned int) var_1);
                            }
                            for (short i_6 = 0; i_6 < 22; i_6 += 2) 
                            {
                                var_18 -= ((/* implicit */short) arr_15 [i_0] [i_1 + 1] [i_1 + 1] [i_3] [i_6] [i_6]);
                                arr_17 [i_0] [7ULL] [i_1 - 3] [i_2] [i_3] [i_2] = var_9;
                            }
                            arr_18 [i_0] [i_0] |= ((/* implicit */unsigned char) ((((/* implicit */_Bool) 9223372036854775807LL)) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)-3606))) : (596495329U)));
                        }
                    } 
                } 
                arr_19 [i_0] = ((/* implicit */short) ((_Bool) (short)4246));
                arr_20 [i_1] [i_1] |= ((unsigned int) min((((unsigned long long int) (short)12353)), (((/* implicit */unsigned long long int) min(((unsigned short)24492), (((/* implicit */unsigned short) (short)32754)))))));
            }
        } 
    } 
    var_19 -= ((/* implicit */unsigned char) var_3);
    var_20 = ((/* implicit */short) (-(((/* implicit */int) ((unsigned char) var_10)))));
    var_21 = ((/* implicit */unsigned short) var_6);
}
