/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 141221
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=141221 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/141221
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
    /* LoopSeq 2 */
    for (unsigned char i_0 = 2; i_0 < 19; i_0 += 1) 
    {
        var_20 = ((/* implicit */int) arr_1 [i_0]);
        var_21 -= ((/* implicit */signed char) ((unsigned short) ((((/* implicit */_Bool) ((long long int) var_12))) ? (((/* implicit */int) arr_0 [i_0 + 3])) : (var_4))));
        /* LoopNest 2 */
        for (unsigned char i_1 = 4; i_1 < 21; i_1 += 3) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    arr_9 [i_1] [i_1 + 1] [i_1] = ((/* implicit */long long int) min((((((/* implicit */_Bool) arr_7 [i_1] [i_0 + 1])) ? (2147483647) : (((/* implicit */int) arr_7 [i_1] [i_0 + 2])))), (((((/* implicit */_Bool) arr_7 [i_0 - 1] [(unsigned short)13])) ? (var_11) : (((/* implicit */int) arr_7 [i_0 + 3] [i_1 + 1]))))));
                    var_22 = ((/* implicit */signed char) (((_Bool)0) ? ((((_Bool)1) ? (((/* implicit */int) (signed char)-15)) : (((/* implicit */int) (_Bool)1)))) : (((/* implicit */int) (_Bool)1))));
                    arr_10 [i_0] [i_1] [i_2] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_8 [i_1] [i_0 + 1] [i_1 - 3])) ? (((/* implicit */long long int) min((((((/* implicit */_Bool) (unsigned char)255)) ? ((-2147483647 - 1)) : (((/* implicit */int) (signed char)-48)))), (((/* implicit */int) arr_8 [i_1] [i_1] [i_2]))))) : ((((_Bool)1) ? (((/* implicit */long long int) ((/* implicit */int) min(((_Bool)0), ((_Bool)1))))) : (((((/* implicit */_Bool) var_2)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)241))) : (var_6)))))));
                    var_23 |= ((/* implicit */short) ((signed char) ((((/* implicit */int) var_5)) + ((-(((/* implicit */int) var_5)))))));
                    arr_11 [(_Bool)1] [i_1] [(_Bool)1] = ((/* implicit */unsigned char) ((short) var_13));
                }
            } 
        } 
    }
    for (signed char i_3 = 1; i_3 < 14; i_3 += 1) 
    {
        var_24 |= ((/* implicit */unsigned short) (+(((((/* implicit */_Bool) (unsigned char)6)) ? (((/* implicit */int) arr_0 [i_3 + 2])) : (((/* implicit */int) arr_0 [i_3 + 3]))))));
        /* LoopSeq 4 */
        /* vectorizable */
        for (unsigned int i_4 = 1; i_4 < 16; i_4 += 2) 
        {
            var_25 = ((/* implicit */unsigned char) max((var_25), (((/* implicit */unsigned char) arr_6 [i_3] [(signed char)16]))));
            var_26 = ((/* implicit */unsigned short) min((var_26), (((/* implicit */unsigned short) ((unsigned int) arr_14 [(short)16])))));
        }
        for (int i_5 = 2; i_5 < 16; i_5 += 2) 
        {
            var_27 = (i_3 % 2 == zero) ? ((((~(((((/* implicit */_Bool) var_7)) ? (6858879265741655960ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_5))))))) << (((((((/* implicit */_Bool) arr_13 [i_3])) ? (((/* implicit */long long int) var_3)) : (var_6))) + (7638787433468353588LL))))) : ((((~(((((/* implicit */_Bool) var_7)) ? (6858879265741655960ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_5))))))) << (((((((((/* implicit */_Bool) arr_13 [i_3])) ? (((/* implicit */long long int) var_3)) : (var_6))) + (7638787433468353588LL))) - (7638787434136319214LL)))));
            var_28 |= ((/* implicit */int) max((((((/* implicit */_Bool) arr_19 [i_5 - 1] [i_5])) ? (((/* implicit */long long int) ((/* implicit */int) ((3530456081U) <= (((/* implicit */unsigned int) ((/* implicit */int) arr_7 [i_5 + 1] [i_5]))))))) : (((((/* implicit */_Bool) -4105618134893432885LL)) ? (3326807989363747748LL) : (((/* implicit */long long int) var_11)))))), (((/* implicit */long long int) (-(((arr_0 [i_3]) ? (((/* implicit */unsigned int) ((/* implicit */int) var_5))) : (var_0))))))));
            arr_23 [i_5] &= ((((/* implicit */int) ((short) min((-4105618134893432885LL), (((/* implicit */long long int) -2147483642)))))) >> (((((/* implicit */int) arr_20 [i_3] [i_3 + 2] [i_3])) - (14660))));
        }
        for (int i_6 = 2; i_6 < 16; i_6 += 2) 
        {
            arr_27 [i_3] = ((((((/* implicit */_Bool) arr_13 [i_3])) ? (((((/* implicit */_Bool) (unsigned short)46605)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (signed char)127)))) : (((/* implicit */int) var_5)))) << (((((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)40)) ? (-4105618134893432885LL) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))))) ? ((-(-185724084))) : (1792))) - (185724070))));
            arr_28 [i_3] [i_3] = (i_3 % 2 == zero) ? (((/* implicit */unsigned char) ((((((/* implicit */int) arr_14 [i_3])) + (2147483647))) >> (((arr_18 [i_3]) + (2820941899400113575LL)))))) : (((/* implicit */unsigned char) ((((((((/* implicit */int) arr_14 [i_3])) - (2147483647))) + (2147483647))) >> (((((arr_18 [i_3]) + (2820941899400113575LL))) - (5211331932286669198LL))))));
        }
        for (signed char i_7 = 2; i_7 < 14; i_7 += 3) 
        {
            var_29 -= ((/* implicit */unsigned short) ((max((arr_2 [i_7 + 3]), (((/* implicit */long long int) arr_29 [i_3 + 1] [i_3 - 1] [(unsigned short)0])))) == (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */unsigned long long int) 1789372078)) == (13397280463501321990ULL)))))));
            arr_31 [i_3] = ((/* implicit */long long int) ((((/* implicit */unsigned int) ((((((/* implicit */int) (unsigned char)4)) + (((/* implicit */int) (unsigned short)0)))) & (((/* implicit */int) ((1434419078U) != (32704U))))))) == (((662503078U) >> (((var_14) - (4247014698U)))))));
            arr_32 [i_3] [i_7] [i_3] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) min((((/* implicit */unsigned short) var_1)), ((unsigned short)61898)))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned short)19587)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) (unsigned char)215))))) : (arr_3 [i_3])))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) 2658553801590828754LL)) ? (((((/* implicit */_Bool) arr_26 [i_3])) ? (arr_29 [i_3] [i_7] [i_3]) : (var_3))) : (((/* implicit */int) arr_13 [i_3]))))) : ((-(((((/* implicit */_Bool) arr_24 [i_3 - 1] [i_3])) ? (((/* implicit */long long int) ((/* implicit */int) var_17))) : (arr_5 [i_7] [i_3] [(unsigned short)19]))))));
        }
        arr_33 [i_3] [i_3] = max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 894282562)) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) (signed char)(-127 - 1)))))), (min((arr_3 [i_3]), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_3 [i_3])) ? (((/* implicit */int) (unsigned short)1204)) : (((/* implicit */int) arr_14 [i_3]))))))));
    }
    var_30 = ((/* implicit */long long int) var_16);
    var_31 = ((/* implicit */int) var_2);
}
