/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 182064
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=182064 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/182064
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
    for (long long int i_0 = 0; i_0 < 11; i_0 += 1) 
    {
        for (int i_1 = 0; i_1 < 11; i_1 += 2) 
        {
            {
                var_10 = ((/* implicit */long long int) ((unsigned int) var_3));
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 11; i_2 += 2) 
                {
                    for (unsigned char i_3 = 2; i_3 < 10; i_3 += 2) 
                    {
                        {
                            var_11 = ((/* implicit */unsigned short) min((((var_9) - (arr_2 [i_3 - 1]))), (min((arr_2 [i_3 + 1]), (arr_2 [i_3 - 1])))));
                            /* LoopSeq 4 */
                            for (int i_4 = 0; i_4 < 11; i_4 += 1) 
                            {
                                arr_13 [i_0] [i_4] [(short)7] [i_3 - 2] [i_0] [i_1] = ((/* implicit */short) (-(((unsigned int) (_Bool)1))));
                                var_12 = ((/* implicit */int) arr_10 [(short)10] [(short)10] [(short)10] [(short)10]);
                                var_13 &= ((/* implicit */_Bool) ((int) min((arr_5 [i_0] [i_3 + 1] [i_2] [i_2]), ((short)-4620))));
                                var_14 += ((/* implicit */unsigned char) ((_Bool) min((arr_8 [i_3 - 2] [i_3 - 1] [(short)4] [i_3 + 1]), (((/* implicit */int) (unsigned char)10)))));
                            }
                            for (short i_5 = 3; i_5 < 9; i_5 += 2) 
                            {
                                var_15 = ((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) ((short) min((var_6), (((/* implicit */long long int) (unsigned char)126))))))) ^ (arr_2 [(unsigned char)6])));
                                arr_16 [i_0] [(unsigned char)3] = ((/* implicit */unsigned char) var_3);
                            }
                            for (unsigned short i_6 = 2; i_6 < 9; i_6 += 4) 
                            {
                                arr_19 [i_0] [i_0] [i_2] = min((((short) (unsigned char)121)), (((/* implicit */short) (!(((/* implicit */_Bool) ((unsigned int) (unsigned char)137)))))));
                                var_16 = ((/* implicit */long long int) (unsigned char)124);
                                arr_20 [(unsigned short)10] = ((/* implicit */unsigned int) min((((/* implicit */short) ((((/* implicit */unsigned int) ((/* implicit */int) (short)4096))) >= (2910536411U)))), (((short) ((long long int) (unsigned char)130)))));
                            }
                            for (unsigned short i_7 = 4; i_7 < 8; i_7 += 2) 
                            {
                                var_17 = ((/* implicit */unsigned char) min((((short) ((((/* implicit */_Bool) arr_21 [(unsigned char)5] [i_2] [i_3 + 1])) ? (((/* implicit */int) (unsigned char)117)) : (var_8)))), (((/* implicit */short) ((((/* implicit */_Bool) -2535863536771692046LL)) && (((/* implicit */_Bool) (unsigned char)111)))))));
                                var_18 = min((((/* implicit */short) ((((/* implicit */int) ((_Bool) 4189992341U))) < (min((((/* implicit */int) (unsigned char)49)), (1151320392)))))), (var_3));
                            }
                        }
                    } 
                } 
            }
        } 
    } 
    var_19 = ((/* implicit */unsigned short) var_8);
}
