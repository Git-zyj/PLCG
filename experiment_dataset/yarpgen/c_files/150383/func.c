/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 150383
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=150383 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/150383
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
    var_20 = ((/* implicit */int) var_18);
    var_21 = ((/* implicit */unsigned char) -1LL);
    /* LoopNest 2 */
    for (short i_0 = 0; i_0 < 24; i_0 += 4) 
    {
        for (signed char i_1 = 2; i_1 < 22; i_1 += 4) 
        {
            {
                /* LoopNest 3 */
                for (short i_2 = 1; i_2 < 22; i_2 += 3) 
                {
                    for (_Bool i_3 = 1; i_3 < 1; i_3 += 1) 
                    {
                        for (long long int i_4 = 0; i_4 < 24; i_4 += 4) 
                        {
                            {
                                var_22 ^= ((/* implicit */short) (-(((unsigned long long int) min((arr_8 [i_1] [9] [i_1]), (((/* implicit */long long int) arr_1 [i_4] [i_4])))))));
                                var_23 = ((/* implicit */int) arr_5 [i_0]);
                            }
                        } 
                    } 
                } 
                var_24 = ((/* implicit */unsigned long long int) max((var_24), (((/* implicit */unsigned long long int) ((((((/* implicit */int) (!(((/* implicit */_Bool) var_8))))) * (((((/* implicit */_Bool) arr_7 [i_0] [i_0] [i_0])) ? (((/* implicit */int) arr_14 [i_0] [i_0] [i_0] [i_0])) : (((/* implicit */int) (short)-5631)))))) == (((/* implicit */int) arr_11 [i_0] [i_0] [i_0] [8LL])))))));
                /* LoopSeq 1 */
                for (long long int i_5 = 2; i_5 < 20; i_5 += 4) 
                {
                    var_25 = ((/* implicit */unsigned int) max((var_25), (((/* implicit */unsigned int) (~(((/* implicit */int) (unsigned char)154)))))));
                    var_26 = ((/* implicit */short) arr_0 [(unsigned short)7]);
                    var_27 = ((/* implicit */_Bool) min((max((var_11), (((/* implicit */unsigned long long int) min((((/* implicit */unsigned char) (signed char)116)), (arr_12 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0])))))), (((/* implicit */unsigned long long int) var_5))));
                    var_28 = (short)5631;
                }
            }
        } 
    } 
    var_29 ^= ((/* implicit */long long int) (+((-(((/* implicit */int) ((((/* implicit */int) var_2)) < (((/* implicit */int) (short)-32765)))))))));
    /* LoopNest 3 */
    for (long long int i_6 = 0; i_6 < 12; i_6 += 1) 
    {
        for (short i_7 = 1; i_7 < 10; i_7 += 4) 
        {
            for (_Bool i_8 = 0; i_8 < 0; i_8 += 1) 
            {
                {
                    var_30 = ((/* implicit */unsigned short) min((var_30), (((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((signed char) arr_23 [i_8 + 1] [i_8 + 1] [i_8]))))))));
                    var_31 = ((/* implicit */long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)240))) < (((((/* implicit */unsigned long long int) var_17)) | (arr_24 [i_8 + 1] [i_8 + 1] [i_8 + 1])))));
                }
            } 
        } 
    } 
}
