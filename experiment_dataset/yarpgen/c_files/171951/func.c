/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 171951
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=171951 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/171951
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
    /* LoopSeq 1 */
    for (unsigned char i_0 = 0; i_0 < 14; i_0 += 4) 
    {
        /* LoopNest 2 */
        for (long long int i_1 = 0; i_1 < 14; i_1 += 1) 
        {
            for (unsigned short i_2 = 0; i_2 < 14; i_2 += 2) 
            {
                {
                    /* LoopNest 2 */
                    for (long long int i_3 = 0; i_3 < 14; i_3 += 3) 
                    {
                        for (unsigned long long int i_4 = 0; i_4 < 14; i_4 += 2) 
                        {
                            {
                                arr_13 [i_2] [i_1] [i_2] = ((/* implicit */unsigned char) (+(((/* implicit */int) ((unsigned char) (!(((/* implicit */_Bool) (unsigned short)7))))))));
                                var_20 = ((/* implicit */unsigned char) max((var_20), (((/* implicit */unsigned char) ((((/* implicit */int) ((_Bool) ((long long int) (unsigned char)60)))) == (((/* implicit */int) (!(((/* implicit */_Bool) (~(((/* implicit */int) (signed char)110)))))))))))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (unsigned short i_5 = 0; i_5 < 14; i_5 += 3) 
                    {
                        for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                        {
                            {
                                var_21 -= ((/* implicit */long long int) (!(((/* implicit */_Bool) (unsigned char)188))));
                                arr_20 [(unsigned char)9] [i_1] [i_2] [i_1] [i_6] = ((/* implicit */unsigned int) ((unsigned long long int) (((+(var_17))) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-111))))));
                                var_22 = ((/* implicit */short) (+((+(((/* implicit */int) ((unsigned short) var_12)))))));
                                var_23 = ((/* implicit */long long int) min((((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((signed char) var_11)))))), (min((((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) var_3)), (4U)))), ((~(arr_8 [i_0] [i_0] [i_2])))))));
                            }
                        } 
                    } 
                    arr_21 [i_0] [i_1] [i_1] [i_0] = ((/* implicit */unsigned short) min(((~((-(((/* implicit */int) (signed char)106)))))), ((+(((/* implicit */int) ((unsigned char) var_11)))))));
                }
            } 
        } 
        arr_22 [i_0] = ((/* implicit */_Bool) ((unsigned long long int) ((_Bool) ((long long int) -6251083509043911027LL))));
        var_24 = ((/* implicit */short) (+((-(18446744073709551596ULL)))));
    }
    var_25 = ((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) ((unsigned char) (-(-1))))), (min((((/* implicit */unsigned int) (~(((/* implicit */int) (unsigned short)127))))), (min((((/* implicit */unsigned int) var_13)), (var_4)))))));
    /* LoopNest 3 */
    for (long long int i_7 = 0; i_7 < 22; i_7 += 1) 
    {
        for (unsigned long long int i_8 = 0; i_8 < 22; i_8 += 2) 
        {
            for (unsigned int i_9 = 0; i_9 < 22; i_9 += 4) 
            {
                {
                    arr_31 [i_9] [i_8] [i_7] [i_7] = (~(min((((/* implicit */unsigned int) (short)-8533)), (arr_23 [i_7]))));
                    arr_32 [i_7] [i_7] [i_9] = ((/* implicit */unsigned short) (~((+((-(((/* implicit */int) (unsigned short)55382))))))));
                    var_26 ^= ((/* implicit */int) ((unsigned short) ((unsigned long long int) var_4)));
                    var_27 = ((/* implicit */unsigned int) max((var_27), (((/* implicit */unsigned int) min(((~(((/* implicit */int) var_0)))), (((/* implicit */int) ((unsigned short) (~(((/* implicit */int) (unsigned short)0)))))))))));
                }
            } 
        } 
    } 
}
