/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 102525
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=102525 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/102525
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
    var_20 = ((/* implicit */unsigned char) (short)-16578);
    /* LoopSeq 2 */
    for (unsigned char i_0 = 0; i_0 < 17; i_0 += 1) 
    {
        /* LoopSeq 2 */
        /* vectorizable */
        for (unsigned int i_1 = 1; i_1 < 16; i_1 += 4) 
        {
            var_21 = ((/* implicit */unsigned short) (short)16578);
            var_22 = ((var_12) ^ (((/* implicit */long long int) 3620564567U)));
            var_23 = ((/* implicit */short) 1073610752);
        }
        for (short i_2 = 2; i_2 < 15; i_2 += 2) 
        {
            var_24 = ((/* implicit */long long int) min((min((((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) var_4))) ^ (-3922331360868010449LL)))), (((((/* implicit */unsigned long long int) ((/* implicit */int) (short)13080))) ^ (var_15))))), (arr_1 [i_2 + 2] [i_0])));
            arr_10 [i_2] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((((/* implicit */_Bool) (short)-17011)) ? (13897147233724558206ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)32767))))) | (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned char)145)) ? (((/* implicit */int) (short)16576)) : (((/* implicit */int) (short)-13080)))))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_8 [i_2])) ^ (var_9)))) : (arr_0 [i_0] [i_0])));
        }
        var_25 = -9223372036854775803LL;
        var_26 = ((/* implicit */unsigned long long int) arr_4 [i_0] [i_0] [13]);
        var_27 |= ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_0] [i_0])) ? (((/* implicit */int) (short)16579)) : (((/* implicit */int) var_17))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) max((((/* implicit */unsigned short) var_10)), (var_3))))) < (((((/* implicit */_Bool) 13040840108424257573ULL)) ? (1863490110U) : (((/* implicit */unsigned int) ((/* implicit */int) var_1))))))))) : (2144952486015765682ULL)));
    }
    /* vectorizable */
    for (unsigned char i_3 = 0; i_3 < 24; i_3 += 4) 
    {
        /* LoopSeq 3 */
        for (unsigned short i_4 = 1; i_4 < 20; i_4 += 2) 
        {
            var_28 = ((/* implicit */int) (unsigned short)65535);
            var_29 |= ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_5)) || (((/* implicit */_Bool) ((((/* implicit */_Bool) (short)32376)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)16582))) : (arr_12 [i_3]))))));
        }
        for (int i_5 = 1; i_5 < 20; i_5 += 4) /* same iter space */
        {
            var_30 = ((/* implicit */long long int) ((((((/* implicit */_Bool) -928870083)) ? (arr_18 [i_3] [i_3]) : (((/* implicit */unsigned long long int) arr_17 [i_3])))) < (((/* implicit */unsigned long long int) ((/* implicit */int) arr_11 [i_3] [i_3])))));
            var_31 *= arr_12 [i_5];
            /* LoopNest 2 */
            for (unsigned long long int i_6 = 1; i_6 < 22; i_6 += 3) 
            {
                for (short i_7 = 0; i_7 < 24; i_7 += 4) 
                {
                    {
                        var_32 = ((/* implicit */short) ((674402713U) < (((/* implicit */unsigned int) ((/* implicit */int) arr_11 [i_3] [i_3])))));
                        var_33 = (unsigned char)255;
                        arr_25 [i_3] [i_5] = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)-32397)) ? (((/* implicit */int) (short)-17028)) : (((/* implicit */int) (unsigned char)0))))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) var_15)) ? (((/* implicit */int) (short)32380)) : (((/* implicit */int) (unsigned char)255))))) : (((var_7) ? (var_12) : (((/* implicit */long long int) ((/* implicit */int) var_10)))))));
                    }
                } 
            } 
            var_34 += ((/* implicit */unsigned short) (unsigned char)39);
            var_35 = arr_12 [i_5];
        }
        for (int i_8 = 1; i_8 < 20; i_8 += 4) /* same iter space */
        {
            var_36 = (unsigned char)238;
            var_37 -= ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 35184372088831LL)) ? (arr_27 [i_3] [i_3] [i_3]) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)134)))))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) (short)-32372)) ? (((/* implicit */int) arr_24 [0ULL])) : (((/* implicit */int) arr_19 [i_3] [i_3] [i_3] [i_8]))))) : (((((/* implicit */_Bool) (short)-32382)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)138))) : (-4833768047558525568LL)))));
        }
        var_38 = ((/* implicit */unsigned int) (short)17010);
        var_39 = ((/* implicit */unsigned long long int) arr_17 [i_3]);
        var_40 ^= ((/* implicit */long long int) ((((/* implicit */_Bool) 17018614249593190857ULL)) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) (short)32382)) ? (((/* implicit */int) (signed char)109)) : (((/* implicit */int) var_1))))) : (arr_21 [i_3] [i_3])));
    }
    var_41 = (short)16607;
}
