/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 177394
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=177394 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/177394
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
    var_20 = ((/* implicit */signed char) ((int) (~(((unsigned long long int) 2147483647)))));
    /* LoopNest 3 */
    for (unsigned short i_0 = 4; i_0 < 12; i_0 += 1) 
    {
        for (_Bool i_1 = 0; i_1 < 0; i_1 += 1) 
        {
            for (int i_2 = 0; i_2 < 14; i_2 += 3) 
            {
                {
                    /* LoopSeq 3 */
                    for (unsigned short i_3 = 0; i_3 < 14; i_3 += 1) 
                    {
                        var_21 *= ((/* implicit */unsigned short) (unsigned char)122);
                        var_22 = ((/* implicit */unsigned short) ((((unsigned int) ((unsigned short) (unsigned char)40))) <= (((/* implicit */unsigned int) (+(((/* implicit */int) ((unsigned short) 4438755390432677984ULL))))))));
                        arr_11 [i_0] [i_0] [i_0 - 3] = ((/* implicit */unsigned short) ((unsigned char) (~((-(((/* implicit */int) (short)8221)))))));
                    }
                    for (unsigned short i_4 = 0; i_4 < 14; i_4 += 2) 
                    {
                        arr_14 [i_0] [(_Bool)1] [0] [i_0] = ((/* implicit */unsigned int) (-(((/* implicit */int) (signed char)-1))));
                        var_23 = ((/* implicit */unsigned int) ((_Bool) ((int) (unsigned char)139)));
                        arr_15 [i_0] [6LL] [i_0] = ((/* implicit */short) ((unsigned char) (unsigned char)5));
                    }
                    for (int i_5 = 3; i_5 < 13; i_5 += 2) 
                    {
                        arr_18 [i_0] [i_0] [i_0] [i_5] = ((/* implicit */short) (~(((((/* implicit */int) (unsigned char)217)) / (((/* implicit */int) (unsigned char)38))))));
                        var_24 = ((/* implicit */short) max((var_24), (((/* implicit */short) ((unsigned int) ((signed char) 4185400012U))))));
                    }
                    var_25 = ((/* implicit */unsigned long long int) max((var_25), (((/* implicit */unsigned long long int) (+(((/* implicit */int) (!(((/* implicit */_Bool) 3733810830U))))))))));
                    var_26 = ((/* implicit */long long int) max((var_26), (((/* implicit */long long int) ((int) (!(((/* implicit */_Bool) (~(0U))))))))));
                    var_27 = ((/* implicit */int) ((unsigned int) ((unsigned char) 18446744073709551615ULL)));
                }
            } 
        } 
    } 
    /* LoopNest 2 */
    for (unsigned char i_6 = 0; i_6 < 13; i_6 += 3) 
    {
        for (unsigned short i_7 = 2; i_7 < 11; i_7 += 3) 
        {
            {
                var_28 = ((/* implicit */short) min((var_28), (((/* implicit */short) ((int) ((-1506702065) / (1645057231)))))));
                var_29 = ((/* implicit */long long int) (+(((unsigned long long int) (-(1177014782U))))));
            }
        } 
    } 
    var_30 = ((/* implicit */unsigned int) ((unsigned char) ((unsigned short) ((unsigned long long int) (_Bool)1))));
}
