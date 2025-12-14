/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 159482
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=159482 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/159482
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
    var_10 = ((/* implicit */_Bool) ((((/* implicit */_Bool) 4843683016062986596ULL)) ? (max(((~(-5038998369739908581LL))), (((/* implicit */long long int) (((-9223372036854775807LL - 1LL)) >= (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))))))) : (((/* implicit */long long int) ((/* implicit */int) var_2)))));
    var_11 = ((/* implicit */_Bool) min((var_11), (((var_5) && (((/* implicit */_Bool) ((((/* implicit */_Bool) max((-7479835865870147975LL), (((/* implicit */long long int) (unsigned short)61749))))) ? (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (unsigned char)95))) >= (-4306261569449103896LL)))) : (((/* implicit */int) max(((unsigned char)96), ((unsigned char)160)))))))))));
    /* LoopNest 3 */
    for (long long int i_0 = 3; i_0 < 22; i_0 += 2) 
    {
        for (unsigned char i_1 = 2; i_1 < 21; i_1 += 3) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    var_12 += min((((((/* implicit */unsigned long long int) -4122757630224848419LL)) >= (((1ULL) << (((/* implicit */int) var_9)))))), (((max((((/* implicit */long long int) (unsigned char)224)), (-4122757630224848416LL))) >= (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) var_2)) && (((/* implicit */_Bool) var_0)))))))));
                    var_13 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) 2551013431U)) ? (((/* implicit */int) (_Bool)1)) : ((+(((/* implicit */int) (_Bool)1))))))) ? (((/* implicit */int) min((((/* implicit */unsigned short) min((((/* implicit */unsigned char) var_7)), ((unsigned char)159)))), ((unsigned short)65535)))) : (((((127LL) >= (((/* implicit */long long int) ((/* implicit */int) (unsigned char)71))))) ? (((/* implicit */int) (signed char)-1)) : (((/* implicit */int) ((((/* implicit */_Bool) 2534644330U)) && ((_Bool)1)))))));
                    /* LoopSeq 3 */
                    /* vectorizable */
                    for (signed char i_3 = 2; i_3 < 22; i_3 += 4) 
                    {
                        arr_11 [i_0] [i_0] [i_0] [(unsigned char)18] [(unsigned char)18] = ((/* implicit */signed char) (~(7295972676219401933ULL)));
                        arr_12 [i_0 - 1] [i_0] [21ULL] [(short)17] |= ((/* implicit */short) ((((/* implicit */long long int) ((2080374784U) & (((/* implicit */unsigned int) ((/* implicit */int) var_1)))))) >= (3377699720527872LL)));
                        var_14 = ((/* implicit */unsigned char) var_8);
                    }
                    for (_Bool i_4 = 0; i_4 < 0; i_4 += 1) 
                    {
                        var_15 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (((((_Bool)1) && (((/* implicit */_Bool) 4261412864U)))) ? (((/* implicit */int) (short)-20650)) : (((/* implicit */int) (unsigned short)63921))))) && (((/* implicit */_Bool) 7479835865870147974LL))));
                        arr_15 [i_0] [i_0] [i_2] [i_4] [i_1] = ((/* implicit */short) (!(((/* implicit */_Bool) (+((+(7806107394656145049LL))))))));
                        arr_16 [i_0 - 2] &= ((/* implicit */int) var_2);
                        var_16 = ((/* implicit */long long int) ((((((((/* implicit */int) var_7)) >= (((/* implicit */int) (short)-1)))) && (((((/* implicit */_Bool) 127LL)) && ((_Bool)1))))) && (((((/* implicit */_Bool) (unsigned char)152)) && (((/* implicit */_Bool) -644304287))))));
                    }
                    for (_Bool i_5 = 1; i_5 < 1; i_5 += 1) 
                    {
                        var_17 = ((/* implicit */unsigned char) (~(1603502468)));
                        var_18 = ((/* implicit */_Bool) (~(((/* implicit */int) (_Bool)1))));
                        var_19 ^= ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) -1LL)), (min((((/* implicit */unsigned long long int) var_8)), (4848508794421587292ULL)))))) && (((4676943955305076465LL) >= (((/* implicit */long long int) ((/* implicit */int) var_3))))));
                    }
                }
            } 
        } 
    } 
    var_20 = ((/* implicit */long long int) -151619096);
}
