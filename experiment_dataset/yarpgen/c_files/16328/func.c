/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 16328
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=16328 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/16328
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
    var_19 = ((/* implicit */unsigned short) (~(((((/* implicit */_Bool) ((((/* implicit */long long int) 1127948384)) | (var_12)))) ? (var_6) : (((var_12) ^ (((/* implicit */long long int) 1127948384))))))));
    /* LoopNest 2 */
    for (signed char i_0 = 3; i_0 < 23; i_0 += 2) 
    {
        for (unsigned char i_1 = 0; i_1 < 25; i_1 += 2) 
        {
            {
                var_20 &= ((/* implicit */int) min((((((/* implicit */_Bool) (~(-1127948385)))) ? (max((((/* implicit */long long int) var_2)), (-6911982291202584243LL))) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) arr_1 [i_0])) && (((/* implicit */_Bool) arr_1 [(unsigned short)6])))))))), (((/* implicit */long long int) arr_0 [i_0] [i_1]))));
                var_21 = ((/* implicit */unsigned long long int) var_18);
                var_22 ^= ((/* implicit */_Bool) 6911982291202584260LL);
                var_23 = ((/* implicit */unsigned short) max((var_23), (((/* implicit */unsigned short) ((((/* implicit */_Bool) (-(min((-6911982291202584247LL), (((/* implicit */long long int) -52473868))))))) ? (((/* implicit */unsigned long long int) (+(((((/* implicit */_Bool) 6851027469376122775ULL)) ? (((/* implicit */int) (unsigned short)65535)) : (((/* implicit */int) (unsigned short)15918))))))) : (max(((+(arr_1 [i_1]))), (((/* implicit */unsigned long long int) max(((unsigned short)65518), (((/* implicit */unsigned short) (signed char)127))))))))))));
                var_24 = ((/* implicit */int) var_7);
            }
        } 
    } 
    /* LoopNest 2 */
    for (unsigned int i_2 = 0; i_2 < 15; i_2 += 2) 
    {
        for (unsigned short i_3 = 0; i_3 < 15; i_3 += 4) 
        {
            {
                var_25 = ((((unsigned long long int) -1403393224)) != (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned short) -2033094736)))));
                /* LoopNest 2 */
                for (signed char i_4 = 0; i_4 < 15; i_4 += 2) 
                {
                    for (short i_5 = 0; i_5 < 15; i_5 += 2) 
                    {
                        {
                            var_26 = ((/* implicit */signed char) ((((/* implicit */_Bool) max((var_3), (((/* implicit */unsigned short) var_18))))) ? (((/* implicit */int) ((min((2251799813652480LL), (((/* implicit */long long int) var_16)))) != (((/* implicit */long long int) ((/* implicit */int) (short)26312)))))) : (((((/* implicit */_Bool) (-(((/* implicit */int) (signed char)-126))))) ? (((/* implicit */int) (unsigned short)41521)) : (((/* implicit */int) arr_5 [i_2]))))));
                            arr_15 [i_2] [i_2] [i_2] [i_2] [i_2] = (signed char)1;
                            var_27 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) (+((+(var_0))))))));
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (unsigned short i_6 = 0; i_6 < 15; i_6 += 2) 
                {
                    for (short i_7 = 0; i_7 < 15; i_7 += 1) 
                    {
                        {
                            arr_23 [i_6] [i_7] [i_6] [i_6] = ((/* implicit */_Bool) max((arr_7 [i_2]), (((/* implicit */unsigned char) min((((/* implicit */signed char) var_13)), ((signed char)-19))))));
                            var_28 = ((/* implicit */int) min((((/* implicit */unsigned long long int) max(((-(((/* implicit */int) (_Bool)0)))), ((~(arr_16 [i_3])))))), (max((((/* implicit */unsigned long long int) var_13)), (((((/* implicit */_Bool) 6911982291202584242LL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)9295))) : (var_11)))))));
                            var_29 = ((/* implicit */unsigned short) (+(((((/* implicit */_Bool) var_2)) ? (((/* implicit */long long int) arr_16 [i_3])) : (arr_6 [i_2])))));
                            var_30 = ((/* implicit */unsigned int) max((min((((/* implicit */long long int) min(((unsigned short)1), ((unsigned short)408)))), (max((var_6), (((/* implicit */long long int) 588103212)))))), (((/* implicit */long long int) ((max((-2033094736), (((/* implicit */int) arr_17 [i_7] [i_6] [i_3] [i_2])))) >> (((/* implicit */int) ((((/* implicit */int) var_18)) != (((/* implicit */int) var_16))))))))));
                        }
                    } 
                } 
            }
        } 
    } 
    var_31 = ((/* implicit */unsigned char) min((((/* implicit */long long int) max((3535084372U), (((/* implicit */unsigned int) (unsigned short)9290))))), (((((/* implicit */_Bool) ((unsigned long long int) var_8))) ? (((/* implicit */long long int) ((/* implicit */int) max((var_2), (((/* implicit */short) (signed char)(-127 - 1))))))) : (((long long int) var_7))))));
    var_32 = var_12;
}
