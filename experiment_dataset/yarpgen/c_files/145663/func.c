/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 145663
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=145663 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/145663
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (unsigned char i_1 = 0; i_1 < 10; i_1 += 1) 
        {
            {
                var_11 = ((/* implicit */signed char) var_1);
                arr_4 [i_1] &= ((/* implicit */_Bool) ((((/* implicit */_Bool) max((((/* implicit */long long int) arr_3 [i_0] [i_1])), (-7978673907273147221LL)))) ? (((/* implicit */int) ((((/* implicit */_Bool) 3349836535U)) && (((/* implicit */_Bool) (signed char)10))))) : ((+(((/* implicit */int) (unsigned char)0))))));
                var_12 = ((/* implicit */int) (~(2420183139U)));
            }
        } 
    } 
    var_13 = ((/* implicit */unsigned char) var_2);
    /* LoopSeq 2 */
    for (long long int i_2 = 0; i_2 < 11; i_2 += 1) 
    {
        var_14 = ((/* implicit */unsigned short) (~(((/* implicit */int) (unsigned char)128))));
        var_15 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) min(((unsigned short)59518), ((unsigned short)56120)))) ? (((/* implicit */int) arr_7 [i_2])) : (((/* implicit */int) (unsigned short)39889))))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)25646)) ? (((/* implicit */long long int) ((/* implicit */int) var_8))) : (var_6)))) ? (((/* implicit */int) max((arr_7 [i_2]), (((/* implicit */unsigned short) arr_5 [i_2] [i_2]))))) : (((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) (unsigned char)100)) : (-1114830510)))))) : (((((/* implicit */_Bool) arr_7 [i_2])) ? (var_0) : (((/* implicit */long long int) ((/* implicit */int) arr_7 [i_2])))))));
        var_16 = ((/* implicit */unsigned long long int) min((var_16), (((/* implicit */unsigned long long int) (unsigned short)39889))));
        var_17 |= ((/* implicit */signed char) ((((/* implicit */_Bool) (signed char)-81)) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)-37))) : (-2461220480542073359LL)));
    }
    for (signed char i_3 = 1; i_3 < 9; i_3 += 2) 
    {
        /* LoopSeq 2 */
        /* vectorizable */
        for (_Bool i_4 = 0; i_4 < 0; i_4 += 1) /* same iter space */
        {
            arr_12 [i_3] [i_3] [i_4] = ((((/* implicit */long long int) ((/* implicit */int) arr_1 [i_3 + 1] [i_4 + 1]))) | (arr_9 [i_3]));
            var_18 = ((/* implicit */long long int) ((_Bool) arr_8 [i_3 - 1]));
        }
        for (_Bool i_5 = 0; i_5 < 0; i_5 += 1) /* same iter space */
        {
            var_19 = ((/* implicit */int) ((((/* implicit */_Bool) ((arr_15 [i_5 + 1] [i_3 + 1] [i_5 + 1]) ? (((/* implicit */unsigned long long int) ((arr_2 [i_3]) ? (((/* implicit */int) var_4)) : (((/* implicit */int) var_10))))) : (var_7)))) ? (((/* implicit */unsigned long long int) (((+(((/* implicit */int) (unsigned short)39890)))) << (((((/* implicit */int) (unsigned short)56357)) - (56346)))))) : ((-((+(2800255803333375413ULL)))))));
            var_20 -= ((/* implicit */_Bool) (+((+(((/* implicit */int) var_10))))));
            var_21 = ((/* implicit */unsigned short) ((((var_2) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) arr_2 [i_5]))))) : (((((/* implicit */_Bool) (unsigned char)147)) ? (((/* implicit */unsigned long long int) 41165316U)) : (var_9))))) >= (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned short)33004)) ? (((/* implicit */int) (unsigned short)9179)) : (((/* implicit */int) (signed char)7)))))));
            /* LoopNest 2 */
            for (int i_6 = 2; i_6 < 8; i_6 += 2) 
            {
                for (unsigned char i_7 = 0; i_7 < 10; i_7 += 2) 
                {
                    {
                        var_22 = ((((/* implicit */_Bool) (-(((((/* implicit */_Bool) arr_1 [(_Bool)1] [i_7])) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)8))) : (var_0)))))) && (((/* implicit */_Bool) var_6)));
                        var_23 = ((/* implicit */unsigned int) min((var_23), (((/* implicit */unsigned int) ((((/* implicit */_Bool) -4531635690875530829LL)) ? (1644708082) : (((/* implicit */int) (unsigned short)39879)))))));
                        arr_20 [i_5] [i_5] [1] [i_5] = ((/* implicit */unsigned char) ((unsigned int) arr_2 [i_3 + 1]));
                        var_24 = ((/* implicit */unsigned short) max((var_24), (((/* implicit */unsigned short) (((~(arr_9 [i_3 - 1]))) / (((/* implicit */long long int) ((((((/* implicit */_Bool) (signed char)21)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) var_4)))) << (((((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) (unsigned short)21)) : (((/* implicit */int) var_1)))) - (10)))))))))));
                        var_25 = ((/* implicit */unsigned char) (((!(((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_4))) + (var_7)))))) ? (((((/* implicit */_Bool) 865127492U)) ? (((/* implicit */int) (unsigned char)182)) : (((/* implicit */int) (unsigned short)65521)))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)-8)) ? (((/* implicit */int) arr_17 [i_3] [i_5])) : (((/* implicit */int) arr_16 [i_5] [i_5] [i_5] [i_5]))))) ? (((/* implicit */int) var_8)) : (((((/* implicit */_Bool) (unsigned short)39889)) ? (((/* implicit */int) arr_8 [i_7])) : (((/* implicit */int) arr_7 [i_7]))))))));
                    }
                } 
            } 
        }
        var_26 = ((/* implicit */signed char) ((((/* implicit */int) var_8)) >> (((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)28)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) var_5))))) || (((/* implicit */_Bool) arr_10 [i_3 - 1])))))));
        var_27 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) var_3))))) ? (((/* implicit */long long int) ((/* implicit */int) var_1))) : (((((/* implicit */_Bool) arr_11 [(unsigned char)5] [i_3])) ? (((/* implicit */long long int) ((/* implicit */int) var_2))) : (var_0)))))) ? (((/* implicit */int) (unsigned short)57439)) : (((/* implicit */int) var_10)));
    }
}
