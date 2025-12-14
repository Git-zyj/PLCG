/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 100208
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=100208 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/100208
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
    for (long long int i_0 = 3; i_0 < 19; i_0 += 4) 
    {
        for (unsigned long long int i_1 = 3; i_1 < 18; i_1 += 4) 
        {
            {
                /* LoopNest 2 */
                for (unsigned int i_2 = 0; i_2 < 20; i_2 += 4) 
                {
                    for (int i_3 = 4; i_3 < 19; i_3 += 3) 
                    {
                        {
                            var_15 = ((/* implicit */unsigned int) min((((((/* implicit */_Bool) ((var_4) ? (var_0) : (((/* implicit */long long int) ((/* implicit */int) arr_6 [i_0])))))) ? (((/* implicit */unsigned long long int) ((((((/* implicit */int) arr_6 [i_0])) + (2147483647))) >> (((var_8) + (1019832385)))))) : ((+(arr_2 [i_0]))))), (((/* implicit */unsigned long long int) arr_1 [i_1]))));
                            var_16 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_0]))) / (arr_5 [i_0] [(short)5] [i_0] [i_1])))) ? (arr_3 [i_2]) : (arr_3 [i_1])))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_5))) : (min((3U), (((/* implicit */unsigned int) var_2))))));
                            var_17 ^= ((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((((/* implicit */long long int) min((((/* implicit */int) var_4)), (arr_7 [i_0] [i_1] [i_3])))) | (min((((/* implicit */long long int) (short)-6293)), (arr_4 [i_0 + 1] [i_0 + 1] [i_2])))))) * (min((((16771904131497885233ULL) << (((var_1) + (4335600298939329170LL))))), (((/* implicit */unsigned long long int) min((var_4), ((_Bool)1))))))));
                            var_18 = arr_4 [i_3 - 3] [3LL] [i_3];
                        }
                    } 
                } 
                var_19 |= ((/* implicit */unsigned char) (((_Bool)1) ? (((arr_3 [i_1 - 2]) ^ (arr_3 [i_1 - 1]))) : (((/* implicit */long long int) arr_7 [i_0] [i_0] [i_1]))));
            }
        } 
    } 
    /* LoopNest 3 */
    for (unsigned int i_4 = 0; i_4 < 15; i_4 += 3) 
    {
        for (unsigned char i_5 = 0; i_5 < 15; i_5 += 2) 
        {
            for (unsigned long long int i_6 = 4; i_6 < 13; i_6 += 1) 
            {
                {
                    arr_14 [i_4] [i_5] [(_Bool)1] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((signed char) ((((var_1) + (9223372036854775807LL))) << (((var_3) - (5167856302581414694ULL))))))) && (((((/* implicit */_Bool) var_9)) && (((/* implicit */_Bool) ((((/* implicit */_Bool) (short)32744)) ? (((/* implicit */long long int) arr_5 [i_4] [i_5] [i_4] [i_6])) : (arr_3 [i_4]))))))));
                    var_20 = ((/* implicit */short) (-(((((((/* implicit */long long int) arr_7 [i_4] [i_5] [i_4])) | (arr_4 [i_4] [i_5] [i_6 - 1]))) ^ (((/* implicit */long long int) ((/* implicit */int) min((((/* implicit */short) var_4)), (arr_10 [i_4] [13U] [i_4])))))))));
                    /* LoopNest 2 */
                    for (signed char i_7 = 0; i_7 < 15; i_7 += 3) 
                    {
                        for (long long int i_8 = 0; i_8 < 15; i_8 += 3) 
                        {
                            {
                                var_21 *= ((/* implicit */_Bool) (~(-1019937363)));
                                var_22 = ((/* implicit */_Bool) min((609216102301629182LL), (((/* implicit */long long int) 4294967292U))));
                                arr_20 [i_8] [10ULL] [i_4] [i_7] [i_8] [i_4] = ((/* implicit */signed char) (~(((/* implicit */int) arr_19 [i_4] [i_4] [3U] [i_6] [i_6] [i_7] [i_8]))));
                            }
                        } 
                    } 
                    var_23 = ((/* implicit */int) var_2);
                }
            } 
        } 
    } 
    var_24 = ((/* implicit */unsigned short) min((((((/* implicit */_Bool) (~(((/* implicit */int) var_12))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_6))) : (var_3))), (((/* implicit */unsigned long long int) min((((((/* implicit */int) var_6)) == (((/* implicit */int) var_12)))), ((!(((/* implicit */_Bool) var_6)))))))));
}
