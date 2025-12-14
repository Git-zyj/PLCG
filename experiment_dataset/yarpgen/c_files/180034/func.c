/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 180034
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=180034 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/180034
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
    /* LoopSeq 3 */
    /* vectorizable */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        var_11 = ((/* implicit */signed char) min((var_11), (((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)127))) - (((unsigned long long int) var_2)))))));
        var_12 = ((/* implicit */signed char) (!(((/* implicit */_Bool) arr_1 [i_0] [i_0]))));
    }
    for (signed char i_1 = 1; i_1 < 9; i_1 += 2) 
    {
        /* LoopNest 3 */
        for (short i_2 = 0; i_2 < 10; i_2 += 2) 
        {
            for (_Bool i_3 = 1; i_3 < 1; i_3 += 1) 
            {
                for (unsigned char i_4 = 1; i_4 < 6; i_4 += 2) 
                {
                    {
                        var_13 = ((/* implicit */signed char) min((((/* implicit */int) ((signed char) arr_1 [i_1] [i_1 + 1]))), ((((~(((/* implicit */int) (signed char)-108)))) ^ (min((((/* implicit */int) (signed char)121)), (2147483647)))))));
                        /* LoopSeq 1 */
                        for (int i_5 = 1; i_5 < 8; i_5 += 2) 
                        {
                            var_14 = ((/* implicit */unsigned short) min((var_14), (((/* implicit */unsigned short) arr_6 [i_2] [i_5]))));
                            arr_15 [i_1 + 1] [i_1] [i_3] [i_4] [i_4] [i_5 - 1] = ((/* implicit */unsigned char) min((((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_14 [i_5 - 1] [i_4] [i_1] [i_1] [i_3 - 1] [i_1 - 1] [i_1 + 1]))))), (((((((/* implicit */_Bool) var_10)) ? (arr_4 [i_1]) : (((/* implicit */unsigned long long int) 278953620)))) + (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-126)))))));
                            var_15 = ((/* implicit */signed char) (-(((((/* implicit */_Bool) var_7)) ? (min((-1472456870542073425LL), (((/* implicit */long long int) (unsigned short)40522)))) : (((/* implicit */long long int) ((/* implicit */int) min(((signed char)24), (((/* implicit */signed char) (_Bool)1))))))))));
                            var_16 = ((/* implicit */signed char) max((var_16), (((/* implicit */signed char) ((((((/* implicit */_Bool) arr_2 [i_2])) ? (((/* implicit */long long int) max((((/* implicit */int) arr_1 [i_2] [i_4])), (var_10)))) : (max((0LL), (arr_6 [i_2] [i_5]))))) >= (((/* implicit */long long int) ((/* implicit */int) arr_13 [i_1 + 1] [i_2] [0ULL] [0ULL]))))))));
                            arr_16 [i_4] [(short)0] [i_3 - 1] [i_2] [i_5] &= ((/* implicit */unsigned char) min((1472456870542073414LL), (((/* implicit */long long int) (short)-5410))));
                        }
                    }
                } 
            } 
        } 
        var_17 = ((/* implicit */unsigned char) min((var_17), (((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_1 + 1] [i_1])) ? (((/* implicit */int) (!(var_0)))) : (((/* implicit */int) (unsigned short)39669))))) ? (((/* implicit */unsigned long long int) arr_6 [8LL] [i_1 + 1])) : (max((arr_2 [0]), (((/* implicit */unsigned long long int) arr_9 [i_1] [0LL])))))))));
    }
    for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
    {
        /* LoopSeq 4 */
        for (int i_7 = 1; i_7 < 18; i_7 += 1) /* same iter space */
        {
            var_18 ^= ((/* implicit */unsigned short) ((((/* implicit */long long int) ((/* implicit */int) ((_Bool) arr_19 [i_7 + 1] [i_7] [i_7])))) ^ (((((var_1) ? (arr_20 [i_7]) : (arr_20 [i_6]))) / (((/* implicit */long long int) ((/* implicit */int) ((unsigned char) 475537334))))))));
            var_19 ^= ((/* implicit */_Bool) max(((short)12620), (((/* implicit */short) ((((/* implicit */long long int) ((/* implicit */int) (signed char)-23))) >= ((~(7120158848881816661LL))))))));
            arr_21 [i_7 - 1] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) (+(var_3)))) ? (((/* implicit */int) (signed char)38)) : (((/* implicit */int) max((arr_19 [i_6] [i_7 + 1] [i_7]), (arr_18 [i_6]))))))) ? (((/* implicit */long long int) ((/* implicit */int) min(((signed char)-118), (arr_19 [i_7] [i_6] [i_6]))))) : (((((/* implicit */_Bool) var_6)) ? (((((/* implicit */_Bool) arr_19 [i_6] [i_6] [i_6])) ? (((/* implicit */long long int) ((/* implicit */int) var_0))) : (var_7))) : (var_4))));
            arr_22 [i_6] [(signed char)17] &= ((/* implicit */unsigned short) (signed char)7);
        }
        for (int i_8 = 1; i_8 < 18; i_8 += 1) /* same iter space */
        {
            var_20 = ((/* implicit */long long int) (_Bool)1);
            var_21 = ((/* implicit */short) min((((/* implicit */unsigned long long int) (signed char)111)), (arr_23 [i_8])));
            arr_25 [i_6] [(short)15] [i_8] = ((/* implicit */unsigned int) ((short) min((6463031255593503742LL), (((/* implicit */long long int) (signed char)31)))));
            arr_26 [(_Bool)1] [i_8] [(unsigned char)6] = ((((/* implicit */_Bool) ((((/* implicit */int) arr_19 [i_6] [i_6] [i_8 - 1])) + (((/* implicit */int) arr_19 [i_6] [i_8] [i_8 - 1]))))) ? (arr_20 [i_6]) : (((/* implicit */long long int) ((((/* implicit */int) min((var_9), (arr_19 [i_6] [i_8] [i_8])))) - (max((-255978309), (((/* implicit */int) var_2))))))));
        }
        for (int i_9 = 1; i_9 < 18; i_9 += 1) /* same iter space */
        {
            arr_29 [i_9 - 1] = ((/* implicit */unsigned short) arr_24 [i_6] [i_9]);
            var_22 = ((/* implicit */unsigned long long int) max((var_22), (((/* implicit */unsigned long long int) var_6))));
        }
        for (int i_10 = 1; i_10 < 18; i_10 += 1) /* same iter space */
        {
            var_23 -= ((/* implicit */signed char) ((((122068259069773442LL) > (arr_20 [i_10 - 1]))) && (((/* implicit */_Bool) min((((7120158848881816660LL) / (((/* implicit */long long int) ((/* implicit */int) var_9))))), (((/* implicit */long long int) arr_17 [i_6] [i_10 - 1])))))));
            var_24 = ((/* implicit */unsigned long long int) min((var_24), (((/* implicit */unsigned long long int) var_10))));
        }
        arr_33 [15LL] = ((/* implicit */long long int) ((((((((/* implicit */_Bool) arr_23 [(signed char)17])) ? (((/* implicit */int) arr_24 [i_6] [i_6])) : (((/* implicit */int) (_Bool)1)))) & (((((/* implicit */int) (_Bool)0)) ^ (((/* implicit */int) arr_24 [17ULL] [i_6])))))) & (((((/* implicit */int) (_Bool)0)) - (((/* implicit */int) (unsigned char)0))))));
        var_25 = ((/* implicit */signed char) min((var_25), (((/* implicit */signed char) (~(5118278453801643426LL))))));
    }
    var_26 |= ((/* implicit */signed char) (((!(((/* implicit */_Bool) var_4)))) ? (((((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) (signed char)5)) && (((/* implicit */_Bool) var_2)))))) & (var_7))) : (max((((/* implicit */long long int) (~(var_3)))), (var_5)))));
    var_27 = ((/* implicit */int) var_6);
}
