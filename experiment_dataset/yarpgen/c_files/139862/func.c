/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 139862
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=139862 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/139862
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
    var_10 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) min((((unsigned char) var_6)), (max((var_6), ((unsigned char)214)))))) : ((-(((/* implicit */int) min((((/* implicit */unsigned short) var_5)), (var_9))))))));
    var_11 *= ((short) min(((unsigned char)43), (((/* implicit */unsigned char) var_2))));
    var_12 = ((/* implicit */long long int) max((min((((((/* implicit */int) (unsigned char)37)) & (((/* implicit */int) var_2)))), (((/* implicit */int) var_5)))), ((+(((((/* implicit */int) var_6)) + (((/* implicit */int) var_6))))))));
    /* LoopNest 2 */
    for (unsigned short i_0 = 3; i_0 < 11; i_0 += 2) 
    {
        for (unsigned short i_1 = 1; i_1 < 10; i_1 += 2) 
        {
            {
                /* LoopNest 3 */
                for (long long int i_2 = 0; i_2 < 12; i_2 += 3) 
                {
                    for (unsigned char i_3 = 1; i_3 < 9; i_3 += 3) 
                    {
                        for (unsigned short i_4 = 4; i_4 < 11; i_4 += 4) 
                        {
                            {
                                var_13 = ((/* implicit */int) var_5);
                                var_14 ^= 7206934174444601487LL;
                                var_15 -= ((/* implicit */unsigned short) ((((/* implicit */int) ((((((/* implicit */_Bool) 8213666789670087053LL)) || (((/* implicit */_Bool) arr_1 [i_0] [i_4])))) || (((/* implicit */_Bool) (signed char)41))))) != (((/* implicit */int) min((((/* implicit */unsigned short) (unsigned char)38)), ((unsigned short)40069))))));
                            }
                        } 
                    } 
                } 
                arr_12 [i_0] [(unsigned char)7] [i_0] = ((/* implicit */unsigned long long int) (+(585141473930018914LL)));
                arr_13 [i_0] [(_Bool)1] = ((/* implicit */unsigned short) (+(((((long long int) arr_11 [i_0] [(unsigned char)0] [i_1] [i_1] [i_1 - 1])) | (((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned char)0)) ? (arr_1 [i_0] [i_0]) : (((/* implicit */unsigned int) ((/* implicit */int) (short)-32759))))))))));
                var_16 = ((/* implicit */unsigned short) max((var_16), (((/* implicit */unsigned short) (!(((/* implicit */_Bool) var_4)))))));
            }
        } 
    } 
}
