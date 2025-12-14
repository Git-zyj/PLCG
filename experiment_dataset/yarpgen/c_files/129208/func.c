/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 129208
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=129208 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/129208
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
    var_10 = ((/* implicit */int) min((var_5), (((/* implicit */unsigned short) min((var_3), (((/* implicit */signed char) (!((_Bool)1)))))))));
    var_11 = ((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) var_3))) % (min((((/* implicit */unsigned int) max((((/* implicit */int) var_2)), (870971276)))), ((~(2099620421U)))))));
    /* LoopSeq 1 */
    for (long long int i_0 = 0; i_0 < 15; i_0 += 4) 
    {
        var_12 = ((/* implicit */int) ((((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */int) (_Bool)1)) : (870971272)))) ? (((/* implicit */unsigned int) 870971301)) : (1572864U)));
        /* LoopSeq 2 */
        for (unsigned char i_1 = 2; i_1 < 14; i_1 += 2) 
        {
            arr_5 [i_0] [i_1] |= ((/* implicit */unsigned int) ((((/* implicit */int) (!(((/* implicit */_Bool) ((long long int) arr_0 [i_0] [i_1])))))) ^ (((((/* implicit */int) (unsigned short)0)) ^ (((((/* implicit */int) var_2)) % (((/* implicit */int) arr_0 [i_1 - 2] [i_1]))))))));
            var_13 = ((/* implicit */_Bool) max((-1365983598), (((/* implicit */int) ((4294967295U) == (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)10))))))));
            /* LoopSeq 2 */
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) /* same iter space */
            {
                var_14 = ((/* implicit */unsigned int) (_Bool)1);
                arr_9 [i_0] [(_Bool)1] [i_1] [(_Bool)1] = ((/* implicit */_Bool) ((unsigned char) ((_Bool) arr_0 [i_1 + 1] [i_1 - 1])));
            }
            for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) /* same iter space */
            {
                arr_12 [i_1] [i_3] [i_1 - 2] = ((/* implicit */_Bool) max(((~(((/* implicit */int) (unsigned char)62)))), (max((((((/* implicit */_Bool) (signed char)81)) ? (10529621) : (870971278))), (((/* implicit */int) arr_0 [i_0] [i_1 + 1]))))));
                arr_13 [i_0] [i_3] [i_0] [7LL] = ((/* implicit */unsigned int) max((((long long int) max((var_3), (((/* implicit */signed char) (_Bool)1))))), (((/* implicit */long long int) arr_4 [i_0] [i_3]))));
                arr_14 [i_0] [i_3] = ((/* implicit */signed char) max((((/* implicit */unsigned int) ((int) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */long long int) ((/* implicit */int) arr_7 [i_0] [i_0] [i_3] [i_3]))) : (-1640187370736795120LL))))), ((~(((var_6) | (((/* implicit */unsigned int) ((/* implicit */int) var_5)))))))));
            }
            var_15 = ((/* implicit */unsigned short) arr_3 [i_0]);
        }
        for (unsigned short i_4 = 0; i_4 < 15; i_4 += 1) 
        {
            /* LoopSeq 3 */
            for (unsigned char i_5 = 2; i_5 < 12; i_5 += 3) 
            {
                var_16 -= ((/* implicit */int) ((((/* implicit */_Bool) ((signed char) (signed char)124))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */int) (unsigned char)0)) : (870971267)))) ? (((/* implicit */long long int) ((/* implicit */int) ((_Bool) (signed char)-122)))) : (max((-2919958974652003149LL), (((/* implicit */long long int) (unsigned short)32768)))))))));
                var_17 = ((/* implicit */unsigned int) arr_8 [i_5]);
            }
            for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
            {
                var_18 -= ((/* implicit */int) (_Bool)1);
                var_19 |= ((/* implicit */unsigned short) var_2);
                arr_24 [i_0] [i_4] [i_6] = ((/* implicit */int) ((min((var_1), (((/* implicit */long long int) (((_Bool)1) && (((/* implicit */_Bool) -8577669998293403790LL))))))) / (((/* implicit */long long int) ((((/* implicit */_Bool) max((-1936269869585767174LL), (((/* implicit */long long int) (signed char)16))))) ? (((/* implicit */int) min((((/* implicit */unsigned char) arr_8 [(_Bool)1])), ((unsigned char)251)))) : ((-(((/* implicit */int) var_2)))))))));
            }
            for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
            {
                var_20 = ((/* implicit */unsigned short) max((var_20), (((/* implicit */unsigned short) (signed char)-94))));
                var_21 = ((/* implicit */signed char) 870971277);
            }
            arr_27 [i_4] = ((/* implicit */_Bool) 870971258);
        }
    }
    var_22 -= ((((/* implicit */_Bool) (-(((/* implicit */int) var_9))))) ? (4624443522705173149LL) : (min((((/* implicit */long long int) max((var_9), (var_9)))), (((var_2) ? (var_8) : (((/* implicit */long long int) ((/* implicit */int) var_3))))))));
    /* LoopSeq 1 */
    for (int i_8 = 0; i_8 < 22; i_8 += 3) 
    {
        var_23 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_29 [i_8])) ? (arr_29 [i_8]) : (((/* implicit */long long int) -870971296))))) ? (((/* implicit */int) var_5)) : ((~(((/* implicit */int) arr_28 [i_8]))))));
        var_24 = ((((/* implicit */_Bool) (unsigned short)65524)) ? (((/* implicit */int) (signed char)-32)) : ((~(((/* implicit */int) (unsigned short)39825)))));
        arr_31 [10] |= ((/* implicit */long long int) ((int) arr_30 [i_8]));
    }
}
