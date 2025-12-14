/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 183867
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=183867 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/183867
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
    var_16 = ((/* implicit */unsigned short) max((var_16), (((/* implicit */unsigned short) ((((var_3) / (min((var_8), (((/* implicit */unsigned long long int) var_2)))))) == (((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((int) var_4))) * (max((((/* implicit */unsigned int) 182497660)), (var_4)))))))))));
    /* LoopSeq 3 */
    /* vectorizable */
    for (unsigned char i_0 = 0; i_0 < 19; i_0 += 4) 
    {
        var_17 = ((/* implicit */short) ((_Bool) (short)-470));
        var_18 = ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) (_Bool)1)) >= (((/* implicit */int) var_12)))))) * (var_8)));
        var_19 *= ((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) ((_Bool) (short)23266)))) - (((((/* implicit */_Bool) 4294967292U)) ? (((/* implicit */long long int) ((/* implicit */int) var_5))) : (var_0)))));
        var_20 ^= ((/* implicit */unsigned char) ((long long int) var_12));
        var_21 = ((/* implicit */unsigned int) var_9);
    }
    for (unsigned char i_1 = 0; i_1 < 10; i_1 += 1) 
    {
        /* LoopSeq 1 */
        for (unsigned char i_2 = 0; i_2 < 10; i_2 += 4) 
        {
            var_22 = ((/* implicit */signed char) ((((((/* implicit */int) ((((/* implicit */int) (unsigned short)61589)) != (((/* implicit */int) var_2))))) > (((/* implicit */int) min((((/* implicit */signed char) arr_5 [i_2])), ((signed char)-48)))))) ? (((var_6) ? (((((-182497669) + (2147483647))) >> (((425050930) - (425050900))))) : (((/* implicit */int) min((var_1), (((/* implicit */short) arr_5 [i_2]))))))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)-31432)) ? (arr_3 [i_1]) : (((/* implicit */unsigned int) ((/* implicit */int) var_9)))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_15))))) : (-425050934)))));
            var_23 = ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((_Bool) ((((/* implicit */_Bool) -182497638)) ? (((/* implicit */long long int) 2375724613U)) : (9223372036854775807LL)))))) | ((+(min((9940301024943898833ULL), (((/* implicit */unsigned long long int) var_7))))))));
            var_24 = ((/* implicit */int) ((((min((182497638), (((/* implicit */int) (signed char)-118)))) < (((/* implicit */int) ((((/* implicit */int) var_2)) > (182497673)))))) ? (((/* implicit */unsigned int) min((((/* implicit */int) var_7)), (((int) arr_1 [i_2]))))) : (var_4)));
            var_25 -= ((/* implicit */short) ((unsigned int) (_Bool)1));
            arr_9 [i_1] [i_1] [i_2] = ((/* implicit */short) min((max(((+(var_14))), (((/* implicit */long long int) arr_7 [i_1] [i_2])))), (((/* implicit */long long int) (+(((/* implicit */int) arr_5 [i_2])))))));
        }
        var_26 = ((/* implicit */long long int) min((var_26), (((/* implicit */long long int) ((((/* implicit */_Bool) min((var_5), (var_1)))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned char) 2656003014383674000LL)))) : (max((((/* implicit */unsigned int) arr_0 [i_1])), (arr_3 [i_1]))))))));
    }
    for (long long int i_3 = 3; i_3 < 11; i_3 += 1) 
    {
        var_27 = ((/* implicit */unsigned int) arr_11 [i_3] [i_3 - 3]);
        var_28 = ((/* implicit */short) ((((unsigned int) arr_1 [i_3 - 2])) << (((min((min((var_15), (((/* implicit */unsigned long long int) arr_12 [i_3])))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned char)132)) ? (((/* implicit */int) (unsigned short)56752)) : (((/* implicit */int) (_Bool)1))))))) - (56739ULL)))));
        var_29 ^= ((/* implicit */short) (+(((((/* implicit */_Bool) ((((/* implicit */_Bool) var_10)) ? (182497637) : (((/* implicit */int) var_1))))) ? (2656003014383673972LL) : (((/* implicit */long long int) ((/* implicit */int) var_9)))))));
        /* LoopSeq 2 */
        for (long long int i_4 = 0; i_4 < 13; i_4 += 4) 
        {
            arr_15 [i_3] = ((((_Bool) (!(var_6)))) ? (((/* implicit */long long int) (~(((((/* implicit */_Bool) arr_12 [i_3])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_5))) : (8176U)))))) : ((~(((((/* implicit */_Bool) arr_14 [7U])) ? (((/* implicit */long long int) arr_14 [i_3])) : (-5239646176698080328LL))))));
            arr_16 [(short)8] = ((unsigned int) ((((/* implicit */_Bool) max((((/* implicit */int) (signed char)56)), (182497669)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!((_Bool)1))))) : (((arr_13 [i_3]) + (((/* implicit */unsigned long long int) var_0))))));
            var_30 = ((/* implicit */unsigned short) min((var_30), (((/* implicit */unsigned short) max((((/* implicit */long long int) (!(((/* implicit */_Bool) arr_1 [i_4]))))), (((-2656003014383674000LL) - (((/* implicit */long long int) min((4026141607U), (((/* implicit */unsigned int) -182497669))))))))))));
        }
        /* vectorizable */
        for (long long int i_5 = 0; i_5 < 13; i_5 += 1) 
        {
            arr_19 [i_5] [i_5] = ((/* implicit */long long int) ((((/* implicit */_Bool) (+(var_15)))) ? (var_3) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1)))))));
            var_31 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (-2147483647 - 1))) ? (((/* implicit */int) (signed char)-123)) : (((/* implicit */int) (signed char)48))))) ? (-5796505435401277672LL) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)0)))));
            var_32 ^= ((/* implicit */signed char) ((((/* implicit */_Bool) arr_17 [0U])) ? (((unsigned long long int) var_2)) : (((/* implicit */unsigned long long int) (~(-2656003014383674000LL))))));
            var_33 = ((/* implicit */short) -182497638);
        }
    }
    var_34 = ((/* implicit */int) ((((((((/* implicit */_Bool) var_5)) || (((/* implicit */_Bool) 2822077635U)))) && (var_7))) || (((/* implicit */_Bool) 3232037677U))));
    var_35 = ((/* implicit */unsigned long long int) min((((/* implicit */long long int) var_9)), (((((/* implicit */long long int) ((/* implicit */int) (signed char)48))) ^ (((5260631606226901867LL) << (((((-2031741412) + (2031741462))) - (50)))))))));
}
