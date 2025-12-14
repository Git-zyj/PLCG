/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 110661
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=110661 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/110661
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
    /* vectorizable */
    for (unsigned char i_0 = 0; i_0 < 10; i_0 += 4) 
    {
        /* LoopNest 2 */
        for (unsigned char i_1 = 0; i_1 < 10; i_1 += 1) 
        {
            for (unsigned char i_2 = 0; i_2 < 10; i_2 += 3) 
            {
                {
                    /* LoopSeq 3 */
                    for (unsigned char i_3 = 0; i_3 < 10; i_3 += 1) 
                    {
                        var_19 = ((((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned char) var_2)))) ^ (((((/* implicit */unsigned long long int) ((/* implicit */int) var_2))) ^ (arr_4 [i_1] [i_1]))));
                        var_20 = ((/* implicit */unsigned char) ((16247953061007797525ULL) | (11974340253027240947ULL)));
                    }
                    for (unsigned char i_4 = 0; i_4 < 10; i_4 += 4) 
                    {
                        var_21 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) 15279916116953662002ULL)) ? (5874267103450253175ULL) : (2198791012701754086ULL)));
                        var_22 &= ((/* implicit */unsigned long long int) ((((/* implicit */int) ((unsigned char) arr_13 [(unsigned char)9] [i_1]))) >> (((((((/* implicit */_Bool) 2198791012701754086ULL)) ? (8117726881536705395ULL) : (8117726881536705395ULL))) - (8117726881536705386ULL)))));
                        var_23 &= ((/* implicit */unsigned char) ((((/* implicit */int) ((unsigned char) var_11))) ^ (((/* implicit */int) ((unsigned char) 15279916116953662002ULL)))));
                    }
                    for (unsigned long long int i_5 = 0; i_5 < 10; i_5 += 3) 
                    {
                        var_24 *= ((15279916116953662031ULL) - (16247953061007797529ULL));
                        var_25 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)255)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) arr_2 [i_0]))))) ? (((((/* implicit */_Bool) 5547569135998662808ULL)) ? (arr_3 [(unsigned char)7] [i_2] [i_0]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_2))))) : (((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned char)255)) / (((/* implicit */int) arr_10 [i_0])))))));
                    }
                    var_26 = ((/* implicit */unsigned long long int) ((unsigned char) ((((/* implicit */int) (unsigned char)17)) >= (((/* implicit */int) (unsigned char)4)))));
                    var_27 -= ((unsigned char) 2198791012701754076ULL);
                }
            } 
        } 
        var_28 = ((/* implicit */unsigned long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned char) 3166827956755889579ULL)))) > (((((/* implicit */_Bool) var_9)) ? (4043710631129412512ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_2)))))));
        arr_17 [i_0] &= ((unsigned long long int) ((((/* implicit */_Bool) arr_15 [i_0] [i_0] [i_0])) ? (arr_3 [i_0] [i_0] [i_0]) : (arr_14 [i_0] [i_0] [i_0] [(unsigned char)3])));
    }
    var_29 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_14)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)243))) : (var_4)))) ? (((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)139))) & (var_10))) : (((unsigned long long int) var_4))))) ? (((((((/* implicit */unsigned long long int) ((/* implicit */int) var_7))) > (0ULL))) ? (((((/* implicit */_Bool) (unsigned char)175)) ? (9ULL) : (16247953061007797525ULL))) : (((var_18) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) var_15))))))) : (((((2806394046227340392ULL) >> (((((/* implicit */int) (unsigned char)89)) - (89))))) & (((unsigned long long int) 5264118834336679259ULL))))));
    var_30 |= ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (var_12) : (var_11)))) ? (((unsigned long long int) var_13)) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_2))) <= (var_3)))))))) ? (((((((/* implicit */unsigned long long int) ((/* implicit */int) var_9))) >= (var_0))) ? (((unsigned long long int) var_6)) : (((var_12) / (var_13))))) : (((unsigned long long int) ((((/* implicit */_Bool) var_15)) ? (9622858606461018943ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_1)))))));
}
