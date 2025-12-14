/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 156819
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=156819 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/156819
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
    var_14 = ((/* implicit */long long int) min((var_14), (((/* implicit */long long int) min(((-((+(((/* implicit */int) var_10)))))), (((/* implicit */int) var_9)))))));
    /* LoopSeq 1 */
    for (unsigned int i_0 = 2; i_0 < 17; i_0 += 2) 
    {
        var_15 = ((/* implicit */_Bool) (~((~(((/* implicit */int) arr_2 [i_0 - 2]))))));
        arr_3 [i_0 + 1] = ((/* implicit */unsigned char) ((arr_2 [i_0]) ? (((/* implicit */int) var_8)) : (((/* implicit */int) ((unsigned char) -5LL)))));
    }
    var_16 = ((/* implicit */_Bool) ((signed char) var_9));
    var_17 = ((/* implicit */signed char) var_5);
    /* LoopSeq 4 */
    for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
    {
        /* LoopSeq 3 */
        for (long long int i_2 = 2; i_2 < 22; i_2 += 4) 
        {
            var_18 = ((/* implicit */unsigned char) ((((/* implicit */long long int) ((/* implicit */int) ((unsigned char) ((short) -3039202166250131341LL))))) - ((+(min((var_2), (((/* implicit */long long int) arr_4 [i_1]))))))));
            arr_9 [i_1] [11LL] [i_2] = ((/* implicit */long long int) ((3039202166250131337LL) <= (-5LL)));
            arr_10 [i_2] [(short)4] [i_1] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (+(((/* implicit */int) (_Bool)1))))) ? (((((/* implicit */_Bool) ((-1281709189907738158LL) + (((/* implicit */long long int) ((/* implicit */int) var_3)))))) ? (((((/* implicit */_Bool) arr_4 [i_1])) ? (var_2) : (((/* implicit */long long int) ((/* implicit */int) var_11))))) : (((/* implicit */long long int) ((/* implicit */int) ((unsigned char) 12439512256929328611ULL)))))) : (((/* implicit */long long int) (((+(((/* implicit */int) arr_6 [i_1] [i_2 - 1])))) - (((/* implicit */int) min((((/* implicit */short) arr_6 [i_2] [i_1])), (arr_4 [i_2])))))))));
        }
        for (long long int i_3 = 0; i_3 < 23; i_3 += 1) 
        {
            arr_15 [i_3] = ((/* implicit */int) ((long long int) ((((/* implicit */_Bool) -1014756456037932911LL)) ? (((/* implicit */int) (unsigned short)8)) : (((/* implicit */int) (unsigned short)56623)))));
            arr_16 [18] [i_1] = ((/* implicit */signed char) ((((/* implicit */int) arr_8 [i_1] [i_1])) + (((((/* implicit */int) arr_8 [i_3] [i_1])) - (((/* implicit */int) arr_8 [i_1] [i_3]))))));
        }
        for (long long int i_4 = 0; i_4 < 23; i_4 += 2) 
        {
            arr_21 [i_1] [i_4] &= ((/* implicit */unsigned short) ((((/* implicit */unsigned int) ((/* implicit */int) arr_8 [i_4] [i_1]))) * (((((/* implicit */unsigned int) (((_Bool)1) ? (((/* implicit */int) var_8)) : (((/* implicit */int) var_7))))) - (((arr_20 [i_4] [i_1]) - (((/* implicit */unsigned int) arr_11 [2LL] [i_1]))))))));
            arr_22 [8U] &= ((/* implicit */signed char) (~(((/* implicit */int) ((min((arr_12 [(unsigned char)4]), (arr_7 [i_4] [(signed char)17]))) < (((/* implicit */long long int) ((/* implicit */int) ((-3039202166250131318LL) >= (arr_18 [i_1] [i_1] [i_1]))))))))));
        }
        var_19 = ((/* implicit */short) arr_5 [17LL]);
        var_20 = (-(((/* implicit */int) ((unsigned short) ((((/* implicit */long long int) arr_11 [i_1] [i_1])) != (var_2))))));
        var_21 = ((/* implicit */_Bool) max((var_21), (((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_12 [i_1])) ? (max((((/* implicit */unsigned int) arr_8 [i_1] [i_1])), (arr_13 [(unsigned char)19]))) : (((/* implicit */unsigned int) ((/* implicit */int) arr_19 [i_1] [i_1])))))) ? (((/* implicit */long long int) (+(((/* implicit */int) var_7))))) : (((((/* implicit */_Bool) ((var_1) + (((/* implicit */long long int) arr_11 [i_1] [i_1]))))) ? ((-(arr_7 [i_1] [(unsigned char)17]))) : (max((var_4), (((/* implicit */long long int) arr_5 [i_1])))))))))));
    }
    for (unsigned int i_5 = 0; i_5 < 12; i_5 += 4) 
    {
        arr_25 [i_5] = arr_12 [i_5];
        var_22 += (-(((long long int) var_8)));
        var_23 &= ((((/* implicit */_Bool) var_13)) || (((/* implicit */_Bool) min((((/* implicit */unsigned int) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) arr_8 [i_5] [i_5])) : (var_5)))), (arr_20 [i_5] [18LL])))));
    }
    for (long long int i_6 = 0; i_6 < 21; i_6 += 4) 
    {
        arr_30 [i_6] = ((/* implicit */unsigned int) arr_8 [i_6] [i_6]);
        arr_31 [i_6] = ((/* implicit */short) ((min((3039202166250131344LL), (-5LL))) + (((/* implicit */long long int) (+(arr_13 [i_6]))))));
        arr_32 [i_6] [i_6] = var_7;
    }
    for (_Bool i_7 = 1; i_7 < 1; i_7 += 1) 
    {
        arr_36 [i_7] = ((/* implicit */unsigned short) (-(max((((/* implicit */int) arr_34 [i_7 - 1] [i_7 - 1])), (arr_11 [i_7] [i_7 - 1])))));
        var_24 = ((/* implicit */int) min((((/* implicit */long long int) var_0)), (((var_4) - ((-(arr_18 [16LL] [(_Bool)1] [i_7])))))));
        var_25 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((unsigned char) ((((/* implicit */_Bool) 4LL)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)18115))) : (-3039202166250131341LL))))) ? ((-(((((/* implicit */_Bool) (unsigned char)103)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_9))) : (6007231816780223005ULL))))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_13 [i_7 - 1])) ? (max((arr_12 [i_7]), (((/* implicit */long long int) arr_35 [i_7])))) : (((/* implicit */long long int) ((((/* implicit */int) var_10)) + (((/* implicit */int) var_7))))))))));
        var_26 = ((/* implicit */unsigned short) min((var_26), (((/* implicit */unsigned short) (-((-(arr_28 [i_7 - 1] [i_7]))))))));
        var_27 = ((/* implicit */long long int) max((6007231816780223005ULL), (((/* implicit */unsigned long long int) -8131822394416764629LL))));
    }
}
