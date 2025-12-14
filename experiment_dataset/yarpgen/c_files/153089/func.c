/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 153089
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=153089 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/153089
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
    for (unsigned short i_0 = 0; i_0 < 20; i_0 += 2) 
    {
        for (short i_1 = 2; i_1 < 18; i_1 += 2) 
        {
            {
                var_12 = ((/* implicit */unsigned char) ((((_Bool) arr_2 [i_0])) ? ((+(((/* implicit */int) (unsigned short)65535)))) : (((((/* implicit */int) arr_2 [i_1 - 1])) & ((-2147483647 - 1))))));
                /* LoopSeq 4 */
                for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
                {
                    arr_10 [i_0] [i_1] = ((/* implicit */signed char) (-(-1)));
                    var_13 -= ((unsigned short) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((_Bool) var_9)))) != (max((((/* implicit */unsigned long long int) (_Bool)1)), (18446744073709551608ULL)))));
                }
                for (unsigned short i_3 = 0; i_3 < 20; i_3 += 3) 
                {
                    var_14 -= ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */int) ((short) (signed char)72))) >> (((((int) 761430252)) - (761430240)))))) ? (((((/* implicit */int) min((arr_2 [i_1]), (((/* implicit */short) var_8))))) >> (((-2027010522) + (2027010532))))) : (min((((/* implicit */int) arr_9 [i_1 + 1] [i_1 + 1] [i_1 - 1])), ((-(((/* implicit */int) arr_7 [i_3]))))))));
                    arr_13 [i_3] [i_1] [i_0] = ((/* implicit */unsigned long long int) ((16818295636614571256ULL) <= (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (+(((/* implicit */int) (signed char)-26)))))))))));
                }
                for (int i_4 = 0; i_4 < 20; i_4 += 2) 
                {
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (int i_5 = 0; i_5 < 20; i_5 += 2) 
                    {
                        var_15 |= ((/* implicit */unsigned char) 22);
                        var_16 = ((/* implicit */long long int) min((var_16), (((/* implicit */long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_11))) * (arr_12 [i_1] [i_1 - 2]))))));
                    }
                    var_17 = ((/* implicit */long long int) ((unsigned long long int) (+(9))));
                    arr_18 [i_0] [i_0] = ((((/* implicit */int) ((short) -4489075280053275180LL))) + ((+(((/* implicit */int) (signed char)-19)))));
                }
                for (long long int i_6 = 1; i_6 < 18; i_6 += 2) 
                {
                    arr_21 [i_0] [i_1] [i_6] = ((/* implicit */long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) min((((/* implicit */int) (short)4556)), (-6)))) ? (arr_0 [i_1 - 2] [i_1 - 2]) : (((-5) + (94925421))))))));
                    arr_22 [i_6] [i_6] = ((/* implicit */unsigned short) ((((/* implicit */int) var_2)) << (((/* implicit */int) ((min((((/* implicit */unsigned long long int) var_11)), (arr_15 [i_0] [i_1] [i_6] [i_6]))) == (((/* implicit */unsigned long long int) ((arr_19 [i_0] [i_0] [i_1] [i_6]) + (((/* implicit */int) var_3))))))))));
                }
                arr_23 [i_0] [i_1] = ((/* implicit */short) max((((/* implicit */unsigned long long int) (short)-13417)), (((unsigned long long int) arr_8 [i_0] [i_1]))));
            }
        } 
    } 
    var_18 -= ((/* implicit */unsigned long long int) (((+(var_5))) != (((((/* implicit */int) var_4)) / (((/* implicit */int) var_3))))));
    /* LoopNest 2 */
    for (int i_7 = 1; i_7 < 14; i_7 += 3) 
    {
        for (signed char i_8 = 0; i_8 < 16; i_8 += 2) 
        {
            {
                var_19 = ((/* implicit */long long int) ((((/* implicit */_Bool) 370051982274289217ULL)) ? (-2147483644) : (80344729)));
                var_20 = ((/* implicit */int) ((signed char) (unsigned char)105));
                arr_30 [i_7] [i_8] = ((/* implicit */unsigned long long int) arr_4 [i_7 + 1] [i_7 - 1]);
            }
        } 
    } 
}
