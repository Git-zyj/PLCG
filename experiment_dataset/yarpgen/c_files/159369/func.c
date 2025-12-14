/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 159369
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=159369 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/159369
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
    for (long long int i_0 = 0; i_0 < 22; i_0 += 3) 
    {
        for (unsigned long long int i_1 = 4; i_1 < 20; i_1 += 3) 
        {
            {
                /* LoopNest 3 */
                for (short i_2 = 2; i_2 < 21; i_2 += 1) 
                {
                    for (signed char i_3 = 0; i_3 < 22; i_3 += 4) 
                    {
                        for (unsigned short i_4 = 3; i_4 < 21; i_4 += 3) 
                        {
                            {
                                arr_10 [i_0] [i_0] [i_2] [i_2] [i_3] [i_2] = ((/* implicit */short) max((min(((+(((/* implicit */int) var_2)))), ((+(((/* implicit */int) arr_6 [i_1] [i_1] [i_1])))))), (max((((((/* implicit */_Bool) 4480276034705648140LL)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) var_12)))), (((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) (short)1827)) : (((/* implicit */int) var_9))))))));
                                var_13 = arr_8 [(unsigned char)0] [(unsigned char)0] [i_2] [(signed char)6];
                            }
                        } 
                    } 
                } 
                var_14 *= ((/* implicit */short) ((((/* implicit */_Bool) ((short) 310529193034028073ULL))) ? (((/* implicit */unsigned int) ((((((/* implicit */int) var_12)) + (2147483647))) >> (((((/* implicit */int) (signed char)-42)) + (56)))))) : (min((((((/* implicit */_Bool) (short)-1827)) ? (143241259U) : (((/* implicit */unsigned int) ((/* implicit */int) (short)-1842))))), (((/* implicit */unsigned int) arr_3 [i_0] [i_1 - 1]))))));
                var_15 ^= ((/* implicit */int) max((((((/* implicit */_Bool) min((arr_2 [i_0] [i_1]), (((/* implicit */long long int) (short)1827))))) ? (((((/* implicit */unsigned long long int) ((/* implicit */int) var_4))) + (arr_4 [(short)20] [i_1] [i_1]))) : (((/* implicit */unsigned long long int) ((/* implicit */int) min(((short)1827), ((short)-8374))))))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (short)-1834)) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (3954179791U))))));
                var_16 = ((/* implicit */short) ((((/* implicit */_Bool) ((unsigned long long int) min((arr_5 [i_0] [i_1] [i_0] [i_1]), (((/* implicit */long long int) arr_3 [i_0] [(short)19])))))) ? (((/* implicit */int) ((unsigned char) (short)1842))) : (((((/* implicit */int) var_9)) << (((((unsigned long long int) (short)-13199)) - (18446744073709538403ULL)))))));
            }
        } 
    } 
    /* LoopNest 3 */
    for (long long int i_5 = 0; i_5 < 14; i_5 += 1) 
    {
        for (short i_6 = 0; i_6 < 14; i_6 += 2) 
        {
            for (signed char i_7 = 2; i_7 < 13; i_7 += 1) 
            {
                {
                    var_17 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((arr_4 [i_7] [i_6] [i_7 - 2]), (((((/* implicit */_Bool) var_1)) ? (arr_4 [i_7] [i_7] [(unsigned short)18]) : (13ULL)))))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)-1834)) ? (8910240440678069543ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_17 [i_7])))))) ? (((((/* implicit */_Bool) var_8)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_12))) : (65535U))) : (((/* implicit */unsigned int) (+(((/* implicit */int) (short)-16658))))))))));
                    arr_20 [i_5] [4U] [i_7] [i_7] = ((/* implicit */long long int) var_1);
                }
            } 
        } 
    } 
    var_18 = ((/* implicit */short) ((((/* implicit */_Bool) ((unsigned char) max((-17LL), (((/* implicit */long long int) (short)32767)))))) ? (((/* implicit */int) (unsigned char)24)) : (var_3)));
}
