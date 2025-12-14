/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 113788
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=113788 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/113788
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
    var_11 = ((/* implicit */unsigned long long int) var_6);
    /* LoopSeq 3 */
    for (signed char i_0 = 0; i_0 < 13; i_0 += 4) /* same iter space */
    {
        var_12 = ((/* implicit */int) arr_0 [11LL]);
        var_13 ^= ((((/* implicit */long long int) ((/* implicit */int) ((-4335586524226801666LL) > (((/* implicit */long long int) 4165908456U)))))) / (arr_0 [i_0]));
    }
    for (signed char i_1 = 0; i_1 < 13; i_1 += 4) /* same iter space */
    {
        var_14 ^= ((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) ((((/* implicit */int) ((((/* implicit */int) (unsigned char)98)) != (((/* implicit */int) arr_3 [(short)10]))))) >> ((((~(arr_5 [i_1]))) - (955566234554244639ULL)))))), (((min((((/* implicit */unsigned int) -1499867953)), (2412139751U))) | (((/* implicit */unsigned int) ((/* implicit */int) arr_4 [i_1])))))));
        /* LoopNest 3 */
        for (signed char i_2 = 0; i_2 < 13; i_2 += 1) 
        {
            for (unsigned long long int i_3 = 1; i_3 < 10; i_3 += 4) 
            {
                for (unsigned short i_4 = 0; i_4 < 13; i_4 += 3) 
                {
                    {
                        var_15 = ((/* implicit */signed char) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)1)) ? (var_9) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))))) || (((/* implicit */_Bool) (+(((/* implicit */int) var_10))))))) ? ((+(2711830303U))) : (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) max((var_6), (((/* implicit */int) arr_10 [i_1] [i_2] [5LL] [(short)0] [i_4])))))))))));
                        var_16 ^= ((/* implicit */unsigned int) arr_1 [0U]);
                        var_17 = ((/* implicit */signed char) (+(((/* implicit */int) ((signed char) ((arr_7 [11LL] [i_1]) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_8))) : (arr_5 [i_1])))))));
                    }
                } 
            } 
        } 
    }
    for (signed char i_5 = 0; i_5 < 13; i_5 += 4) /* same iter space */
    {
        arr_16 [7LL] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) ((signed char) ((((/* implicit */int) arr_13 [i_5])) - (((/* implicit */int) arr_7 [i_5] [i_5])))))) : (((((/* implicit */int) (unsigned short)24)) * ((~(((/* implicit */int) (_Bool)1))))))));
        var_18 = ((/* implicit */unsigned long long int) (~((((+(((/* implicit */int) var_7)))) + (((/* implicit */int) max((var_2), (((/* implicit */unsigned char) arr_7 [i_5] [11LL])))))))));
        arr_17 [i_5] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) max(((-2147483647 - 1)), ((((_Bool)1) ? (((/* implicit */int) (unsigned char)254)) : (((/* implicit */int) (unsigned short)8997))))))) ? (((((/* implicit */_Bool) (unsigned short)31208)) ? (((/* implicit */unsigned long long int) 1882827530U)) : (1904606722295667227ULL))) : (((/* implicit */unsigned long long int) (-(arr_11 [i_5] [i_5]))))));
        arr_18 [i_5] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (((!(((/* implicit */_Bool) (unsigned char)24)))) ? (((/* implicit */unsigned int) (+(((/* implicit */int) var_2))))) : (max((((/* implicit */unsigned int) arr_1 [i_5])), (150389402U)))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)56538))))) : (((/* implicit */int) (!(((/* implicit */_Bool) 34359738367ULL)))))));
    }
    var_19 = ((signed char) var_5);
}
