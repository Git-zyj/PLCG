/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 143124
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=143124 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/143124
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 24; i_1 += 1) 
        {
            {
                arr_4 [i_0] [i_0] = ((/* implicit */short) (~(max((((((/* implicit */_Bool) (unsigned char)37)) ? (((/* implicit */int) (signed char)-125)) : (((/* implicit */int) (signed char)-125)))), (((/* implicit */int) (signed char)-125))))));
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 24; i_2 += 1) 
                {
                    for (int i_3 = 0; i_3 < 24; i_3 += 4) 
                    {
                        {
                            arr_10 [i_3] [i_0] [i_0] [i_0] = ((/* implicit */long long int) ((min((((/* implicit */unsigned int) ((((/* implicit */int) (signed char)0)) - (((/* implicit */int) (signed char)16))))), (max((3015663347U), (((/* implicit */unsigned int) (signed char)118)))))) * (((/* implicit */unsigned int) (+(max((((/* implicit */int) (signed char)127)), (0))))))));
                            arr_11 [i_0] [i_0] = ((/* implicit */short) (signed char)127);
                            arr_12 [i_3] [i_3] [i_0] [i_3] = (signed char)-122;
                        }
                    } 
                } 
                var_17 = ((/* implicit */short) min((var_17), (((/* implicit */short) (~(((((((((/* implicit */_Bool) (signed char)-20)) ? (((/* implicit */int) (signed char)-17)) : (((/* implicit */int) (signed char)119)))) + (2147483647))) >> (min((((/* implicit */int) (_Bool)0)), (1189487145))))))))));
                arr_13 [i_0] [i_1] [i_0] = ((/* implicit */unsigned long long int) (~(min((((((/* implicit */int) (_Bool)1)) - (((/* implicit */int) (_Bool)1)))), (((/* implicit */int) ((signed char) (unsigned short)13060)))))));
                arr_14 [i_0] [i_0] [i_0] = ((514639674) ^ (((((/* implicit */_Bool) 4294967295U)) ? (((int) (short)11200)) : (((/* implicit */int) ((short) (short)-11200))))));
            }
        } 
    } 
    var_18 = ((/* implicit */signed char) ((_Bool) ((((((/* implicit */_Bool) (signed char)112)) ? (-908314926) : (((/* implicit */int) (signed char)-115)))) | (((/* implicit */int) ((((/* implicit */int) (signed char)-126)) < (((/* implicit */int) (_Bool)1))))))));
    var_19 |= ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */int) ((short) 18446744073709551615ULL))) * (((/* implicit */int) ((-1) == (((/* implicit */int) (signed char)-114)))))))) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) ((max((((/* implicit */unsigned long long int) (_Bool)1)), (11330860776056314994ULL))) > (((/* implicit */unsigned long long int) ((int) (signed char)-102))))))));
    var_20 = ((/* implicit */short) ((((((/* implicit */int) ((((/* implicit */unsigned long long int) 7122023747760887131LL)) < (12ULL)))) | (((/* implicit */int) ((((/* implicit */int) (_Bool)1)) < (((/* implicit */int) (signed char)113))))))) ^ (((((/* implicit */_Bool) (unsigned short)12320)) ? (((/* implicit */int) (signed char)-103)) : (((/* implicit */int) (signed char)-115))))));
    var_21 = ((/* implicit */int) max((-7122023747760887129LL), (((/* implicit */long long int) (~(((((/* implicit */_Bool) (signed char)115)) ? (((/* implicit */int) (signed char)127)) : (((/* implicit */int) (signed char)91)))))))));
}
