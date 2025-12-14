/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 11235
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=11235 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/11235
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
    var_15 = ((/* implicit */unsigned short) ((((/* implicit */int) (!(((((/* implicit */int) (unsigned char)19)) < (((/* implicit */int) (unsigned char)243))))))) ^ (((/* implicit */int) (!(((/* implicit */_Bool) ((2956535757139065893LL) + (((/* implicit */long long int) ((/* implicit */int) (unsigned short)55302)))))))))));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 10; i_0 += 4) 
    {
        for (unsigned long long int i_1 = 4; i_1 < 11; i_1 += 4) 
        {
            {
                /* LoopNest 2 */
                for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
                {
                    for (unsigned char i_3 = 0; i_3 < 12; i_3 += 2) 
                    {
                        {
                            var_16 = ((/* implicit */_Bool) 0LL);
                            var_17 ^= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((((/* implicit */int) (unsigned char)236)) * (((/* implicit */int) (unsigned short)38933)))) * (min((((/* implicit */int) (unsigned char)115)), (65408)))))) && (((/* implicit */_Bool) (+(((/* implicit */int) (short)-3406)))))));
                            arr_8 [i_1 - 4] [i_2] = ((/* implicit */unsigned short) max((((((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) (unsigned char)236)) >= (((/* implicit */int) (_Bool)1)))))) * (((((/* implicit */long long int) ((/* implicit */int) (signed char)-44))) / (9223372036854775807LL))))), (((/* implicit */long long int) ((((((/* implicit */long long int) 374744853)) / (-9123038474865153891LL))) > (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))))))));
                            var_18 = ((/* implicit */unsigned short) (_Bool)1);
                        }
                    } 
                } 
                var_19 = ((/* implicit */unsigned short) min((((/* implicit */int) ((((((/* implicit */int) (_Bool)1)) == (((/* implicit */int) (unsigned char)236)))) || (((/* implicit */_Bool) (~(21376380775459691ULL))))))), ((-(((/* implicit */int) ((signed char) (short)3405)))))));
                var_20 = ((/* implicit */unsigned short) ((((int) (_Bool)1)) - ((+((-(((/* implicit */int) (unsigned short)50795))))))));
            }
        } 
    } 
    var_21 += ((/* implicit */unsigned short) ((signed char) (((+(((/* implicit */int) (unsigned char)228)))) * (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)35195))))))));
}
