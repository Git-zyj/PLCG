/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 116472
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=116472 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/116472
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
    /* LoopNest 3 */
    for (long long int i_0 = 3; i_0 < 13; i_0 += 1) 
    {
        for (short i_1 = 0; i_1 < 15; i_1 += 1) 
        {
            for (unsigned short i_2 = 0; i_2 < 15; i_2 += 1) 
            {
                {
                    var_12 = ((/* implicit */long long int) max((14680064U), ((~(max((4280287235U), (((/* implicit */unsigned int) var_4))))))));
                    var_13 = (+(((/* implicit */int) ((_Bool) arr_4 [i_0 + 1]))));
                }
            } 
        } 
    } 
    var_14 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) 14680064U)) ? (((/* implicit */int) (short)8279)) : (((/* implicit */int) (signed char)114))));
    /* LoopSeq 3 */
    for (int i_3 = 0; i_3 < 16; i_3 += 2) 
    {
        var_15 = ((/* implicit */unsigned short) max((var_15), (((/* implicit */unsigned short) ((((/* implicit */_Bool) (~(((/* implicit */int) var_9))))) && (((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) (short)-8284))) ^ (14680072U)))))))));
        var_16 = ((/* implicit */unsigned short) (-(4280287229U)));
        var_17 = ((/* implicit */unsigned int) ((int) (signed char)112));
    }
    for (unsigned int i_4 = 0; i_4 < 12; i_4 += 1) 
    {
        var_18 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) min((var_6), (8046884731644214362ULL)))) ? (((/* implicit */long long int) ((/* implicit */int) var_9))) : (((((/* implicit */_Bool) var_0)) ? (var_7) : (((/* implicit */long long int) ((/* implicit */int) (signed char)-126)))))))) ? ((+(11504289420051747770ULL))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (-(var_2)))) ? (((/* implicit */long long int) ((/* implicit */int) (short)-5301))) : (((var_7) / (var_2))))))));
        /* LoopNest 3 */
        for (long long int i_5 = 2; i_5 < 10; i_5 += 1) 
        {
            for (unsigned long long int i_6 = 0; i_6 < 12; i_6 += 2) 
            {
                for (unsigned short i_7 = 0; i_7 < 12; i_7 += 2) 
                {
                    {
                        var_19 = ((/* implicit */signed char) ((14680047U) == (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-120)))));
                        /* LoopSeq 1 */
                        for (unsigned short i_8 = 0; i_8 < 12; i_8 += 1) 
                        {
                            var_20 = ((/* implicit */long long int) ((((/* implicit */long long int) ((/* implicit */int) ((unsigned short) (short)32640)))) < ((~(var_7)))));
                            arr_29 [i_4] [i_5] [i_6] [i_5] = ((/* implicit */int) ((unsigned char) ((((/* implicit */int) (unsigned char)46)) * (((/* implicit */int) (unsigned char)193)))));
                            var_21 ^= ((/* implicit */unsigned char) ((unsigned long long int) min((((((/* implicit */_Bool) arr_1 [i_6] [i_6])) ? (((/* implicit */unsigned long long int) var_7)) : (var_3))), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) var_3))))))));
                        }
                        var_22 += ((/* implicit */unsigned short) min((((((/* implicit */_Bool) (-(14336U)))) ? (((/* implicit */int) var_11)) : (((((/* implicit */int) (signed char)123)) / (var_1))))), (((/* implicit */int) ((((/* implicit */_Bool) (short)-8270)) || (((/* implicit */_Bool) 4280287199U)))))));
                        /* LoopSeq 2 */
                        for (_Bool i_9 = 1; i_9 < 1; i_9 += 1) /* same iter space */
                        {
                            arr_32 [i_4] [i_5 - 2] [i_5] [i_7] [i_9 - 1] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_8))) : (4280287234U)))) ? (((((/* implicit */_Bool) arr_11 [i_4] [i_5 - 2])) ? (((/* implicit */int) arr_11 [i_4] [i_5 - 1])) : (((/* implicit */int) var_11)))) : ((+(((/* implicit */int) arr_11 [i_7] [i_9 - 1]))))));
                            arr_33 [i_5] [i_5] [i_6] [i_7] [i_9 - 1] [i_4] [i_9 - 1] = ((/* implicit */unsigned char) ((long long int) 1363612584));
                        }
                        for (_Bool i_10 = 1; i_10 < 1; i_10 += 1) /* same iter space */
                        {
                            arr_36 [i_4] [i_5 + 2] [i_5] [i_7] [i_7] [i_10 - 1] = ((/* implicit */_Bool) ((min(((~(((/* implicit */int) (unsigned char)144)))), (((int) var_6)))) | (((/* implicit */int) (signed char)6))));
                            arr_37 [i_4] [i_10 - 1] [i_6] [i_5 + 1] [i_5] = ((/* implicit */unsigned short) 8176);
                            var_23 = ((/* implicit */unsigned short) arr_35 [i_5]);
                            var_24 = arr_2 [i_4];
                        }
                    }
                } 
            } 
        } 
        var_25 = ((int) arr_13 [i_4]);
    }
    for (signed char i_11 = 1; i_11 < 11; i_11 += 2) 
    {
        var_26 = ((/* implicit */int) (+(18196882229150163210ULL)));
        var_27 -= ((/* implicit */unsigned short) max((((/* implicit */long long int) ((arr_9 [i_11 - 1]) > (((/* implicit */int) var_9))))), (min((((/* implicit */long long int) (~(((/* implicit */int) (signed char)126))))), (((long long int) (signed char)-127))))));
    }
    var_28 = (((_Bool)1) && (((/* implicit */_Bool) 14680055U)));
}
