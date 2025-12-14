/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 159507
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=159507 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/159507
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
    var_20 = ((/* implicit */long long int) var_7);
    var_21 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) min((var_7), (((/* implicit */unsigned long long int) (-(((/* implicit */int) (unsigned short)54648)))))))) ? (((((/* implicit */_Bool) max(((short)(-32767 - 1)), (((/* implicit */short) var_12))))) ? (var_16) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)10806))))) : (min((((((/* implicit */_Bool) (-2147483647 - 1))) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)0))) : (0LL))), (((/* implicit */long long int) (!(((/* implicit */_Bool) (unsigned char)110)))))))));
    /* LoopSeq 3 */
    for (short i_0 = 1; i_0 < 11; i_0 += 3) 
    {
        /* LoopSeq 2 */
        for (unsigned short i_1 = 0; i_1 < 12; i_1 += 3) 
        {
            var_22 = ((/* implicit */unsigned long long int) arr_1 [i_0]);
            var_23 = ((/* implicit */unsigned int) min((var_23), ((~(((((/* implicit */_Bool) arr_3 [i_0 + 1] [i_1])) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)(-32767 - 1)))) : (3800555026U)))))));
            var_24 = ((/* implicit */long long int) (+(max((((((/* implicit */int) (unsigned char)249)) >> (((((/* implicit */int) (unsigned short)10799)) - (10798))))), (((/* implicit */int) (signed char)5))))));
            /* LoopNest 2 */
            for (unsigned long long int i_2 = 0; i_2 < 12; i_2 += 3) 
            {
                for (long long int i_3 = 0; i_3 < 12; i_3 += 4) 
                {
                    {
                        arr_12 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */_Bool) min(((~(max((((/* implicit */unsigned long long int) arr_0 [i_1] [i_1])), (arr_10 [i_0] [i_0] [i_0] [8LL] [i_0]))))), (((/* implicit */unsigned long long int) min((((/* implicit */int) arr_4 [(signed char)6] [4] [4])), ((+(((/* implicit */int) arr_5 [i_3] [i_1])))))))));
                        var_25 -= ((/* implicit */unsigned int) min((min((((/* implicit */long long int) ((((/* implicit */int) arr_0 [8U] [i_2])) & (((/* implicit */int) (unsigned char)6))))), (arr_1 [i_0 + 1]))), (((/* implicit */long long int) ((arr_9 [i_0] [i_0] [i_0 - 1] [i_0 + 1] [i_0]) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) (unsigned short)61440)) || (((/* implicit */_Bool) arr_3 [i_0 - 1] [i_0])))))) : (3829838591U))))));
                    }
                } 
            } 
        }
        for (unsigned long long int i_4 = 4; i_4 < 10; i_4 += 2) 
        {
            var_26 ^= ((/* implicit */unsigned short) arr_14 [i_0]);
            var_27 = ((/* implicit */_Bool) ((((((/* implicit */int) ((((/* implicit */int) arr_6 [i_0] [i_0])) < (((/* implicit */int) arr_3 [i_0] [i_4]))))) <= ((+(((/* implicit */int) (_Bool)1)))))) ? (((/* implicit */int) arr_5 [i_0] [i_4])) : (((/* implicit */int) (unsigned short)13945))));
        }
        var_28 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */long long int) 843419933)) : (arr_1 [i_0])))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (signed char)-5)) ? (4057313174720915951LL) : (((/* implicit */long long int) ((/* implicit */int) arr_8 [i_0] [i_0])))))) : ((+(arr_2 [i_0])))))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) arr_6 [i_0 + 1] [i_0 + 1])), (11494873204858952401ULL)))) ? (((/* implicit */int) min((((/* implicit */unsigned short) (_Bool)1)), (arr_3 [i_0] [i_0])))) : (((/* implicit */int) ((((/* implicit */int) arr_0 [i_0] [i_0 + 1])) < (((/* implicit */int) arr_9 [i_0] [(_Bool)1] [i_0 - 1] [i_0] [i_0])))))))) : (max((((/* implicit */long long int) arr_13 [i_0 - 1])), (min((arr_1 [i_0 - 1]), (((/* implicit */long long int) arr_5 [i_0] [i_0]))))))));
    }
    for (short i_5 = 2; i_5 < 22; i_5 += 2) 
    {
        var_29 |= ((/* implicit */long long int) min(((~((+(arr_17 [i_5]))))), ((-(arr_17 [i_5])))));
        var_30 = ((/* implicit */_Bool) (((+(((/* implicit */int) (!(((/* implicit */_Bool) 4057313174720915951LL))))))) | (((/* implicit */int) (!(((/* implicit */_Bool) (~(((/* implicit */int) arr_15 [i_5]))))))))));
        var_31 = ((/* implicit */unsigned int) (-(((/* implicit */int) (!(((/* implicit */_Bool) arr_17 [i_5])))))));
    }
    for (unsigned int i_6 = 1; i_6 < 18; i_6 += 2) 
    {
        /* LoopSeq 1 */
        for (unsigned short i_7 = 4; i_7 < 17; i_7 += 1) 
        {
            var_32 = ((/* implicit */short) ((((/* implicit */_Bool) max((max((((/* implicit */long long int) arr_24 [i_7] [i_7])), (arr_22 [i_6]))), (((/* implicit */long long int) (+(((/* implicit */int) (_Bool)1)))))))) ? (max((((((/* implicit */_Bool) arr_17 [12])) ? (32767ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_15 [i_6]))))), (arr_17 [i_6 - 1]))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((arr_17 [i_7 + 1]), (((/* implicit */unsigned long long int) arr_24 [i_7] [i_7]))))) ? (min((arr_22 [i_6]), (-4057313174720915965LL))) : (((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned short)54737)) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)-16835))) : (arr_21 [i_6])))))))));
            var_33 = ((/* implicit */unsigned long long int) (-((-(((/* implicit */int) arr_15 [i_6 - 1]))))));
            arr_25 [i_7] = ((/* implicit */unsigned int) (~(((((/* implicit */_Bool) max((arr_21 [i_6]), (((/* implicit */unsigned int) arr_20 [i_6]))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-76))) : (6951870868850599228ULL)))));
        }
        var_34 = ((/* implicit */long long int) (+(((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)20608)) ? (((/* implicit */long long int) ((/* implicit */int) arr_19 [i_6]))) : (arr_22 [i_6])))) ? (((((/* implicit */_Bool) 32767ULL)) ? (((/* implicit */int) (unsigned short)20620)) : (((/* implicit */int) arr_15 [i_6])))) : (((((/* implicit */_Bool) -7000539735727538041LL)) ? (((/* implicit */int) arr_18 [i_6] [i_6])) : (((/* implicit */int) arr_15 [i_6 - 1]))))))));
        var_35 = ((/* implicit */short) max((min((((((/* implicit */_Bool) -9223372036854775777LL)) ? (3420575785U) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)(-127 - 1)))))), (arr_16 [i_6 - 1]))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) max((1616233769), (((/* implicit */int) (unsigned char)166))))) ? (((/* implicit */int) arr_20 [i_6])) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_18 [i_6] [i_6]))))))))));
        var_36 |= ((/* implicit */unsigned int) max((((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_24 [2U] [(unsigned char)14])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_15 [i_6]))) : (arr_21 [i_6])))) ? (((/* implicit */long long int) (~(3420575785U)))) : (((((/* implicit */_Bool) arr_20 [i_6])) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)122))) : (arr_22 [17LL]))))), (((/* implicit */long long int) max((((/* implicit */int) arr_23 [(unsigned short)6])), (((((/* implicit */_Bool) arr_21 [i_6 - 1])) ? (-1616233769) : (((/* implicit */int) arr_15 [i_6])))))))));
    }
}
