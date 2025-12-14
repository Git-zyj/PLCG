/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 139424
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=139424 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/139424
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
    for (int i_0 = 0; i_0 < 13; i_0 += 3) 
    {
        var_11 = ((/* implicit */unsigned short) var_5);
        var_12 = ((/* implicit */unsigned long long int) (unsigned short)21237);
    }
    /* LoopNest 3 */
    for (unsigned long long int i_1 = 0; i_1 < 14; i_1 += 2) 
    {
        for (long long int i_2 = 2; i_2 < 11; i_2 += 4) 
        {
            for (unsigned long long int i_3 = 0; i_3 < 14; i_3 += 2) 
            {
                {
                    var_13 = ((/* implicit */unsigned int) var_1);
                    /* LoopNest 2 */
                    for (int i_4 = 0; i_4 < 14; i_4 += 2) 
                    {
                        for (_Bool i_5 = 1; i_5 < 1; i_5 += 1) 
                        {
                            {
                                var_14 = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) (((_Bool)1) ? (((/* implicit */int) (unsigned char)2)) : (((/* implicit */int) (_Bool)1))))) - (((((/* implicit */_Bool) max((((/* implicit */unsigned short) (unsigned char)0)), ((unsigned short)21221)))) ? (((var_8) + (((/* implicit */unsigned long long int) ((/* implicit */int) arr_12 [i_1]))))) : (((((/* implicit */unsigned long long int) var_10)) + (18446744073709551615ULL)))))));
                                var_15 &= ((/* implicit */int) var_10);
                                var_16 += ((/* implicit */long long int) (signed char)-60);
                            }
                        } 
                    } 
                    var_17 = ((/* implicit */signed char) 7781643302942534924ULL);
                }
            } 
        } 
    } 
    var_18 = ((/* implicit */unsigned int) var_1);
    var_19 = ((/* implicit */unsigned int) ((((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-5))) >= (max((((/* implicit */unsigned long long int) 9223372036854775807LL)), (8757009359756385324ULL)))))) % (((/* implicit */int) (short)-32766))));
    var_20 = ((/* implicit */unsigned int) (((!(((/* implicit */_Bool) var_0)))) ? (max((8757009359756385325ULL), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_5)) ? (var_6) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)56745)))))))) : (((/* implicit */unsigned long long int) max((max((((/* implicit */long long int) (short)27681)), (var_10))), (((/* implicit */long long int) ((((/* implicit */_Bool) var_3)) ? (-1532950865) : (((/* implicit */int) (_Bool)1))))))))));
}
