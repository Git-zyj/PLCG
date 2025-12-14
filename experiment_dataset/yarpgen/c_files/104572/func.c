/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 104572
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=104572 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/104572
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
    var_11 = min((var_4), (((/* implicit */int) var_5)));
    /* LoopSeq 3 */
    for (unsigned long long int i_0 = 2; i_0 < 10; i_0 += 3) /* same iter space */
    {
        arr_4 [i_0] = max((min((16714100582326591013ULL), (((/* implicit */unsigned long long int) max((-2147483634), (((/* implicit */int) (_Bool)0))))))), (((/* implicit */unsigned long long int) max((((/* implicit */int) var_9)), (arr_3 [i_0] [i_0])))));
        var_12 -= ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */int) var_3)) : (((/* implicit */int) (unsigned short)8))))) ? ((+(((/* implicit */int) var_5)))) : (((/* implicit */int) arr_0 [i_0]))))) && (((/* implicit */_Bool) (~(max((1732643491382960602ULL), (((/* implicit */unsigned long long int) var_0)))))))));
        /* LoopNest 3 */
        for (unsigned short i_1 = 3; i_1 < 10; i_1 += 2) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                {
                    {
                        var_13 += ((/* implicit */_Bool) ((((/* implicit */int) ((((/* implicit */int) arr_8 [i_1] [i_1 - 2] [i_1])) <= (((/* implicit */int) ((arr_6 [i_0]) > (((/* implicit */long long int) ((/* implicit */int) arr_9 [i_3] [i_2] [i_1] [i_0 + 1]))))))))) * (((((/* implicit */int) min((var_2), (((/* implicit */unsigned short) (unsigned char)159))))) | (min((-1), (((/* implicit */int) var_5))))))));
                        var_14 -= ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)232)) ? (((/* implicit */int) (unsigned char)182)) : (((/* implicit */int) (_Bool)1))))) ? (((/* implicit */int) var_2)) : (((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) arr_14 [i_3] [i_1])), (var_7)))) ? (((/* implicit */int) ((_Bool) var_1))) : (((((/* implicit */int) var_2)) - (((/* implicit */int) var_9)))))));
                    }
                } 
            } 
        } 
    }
    for (unsigned long long int i_4 = 2; i_4 < 10; i_4 += 3) /* same iter space */
    {
        /* LoopNest 2 */
        for (unsigned short i_5 = 4; i_5 < 10; i_5 += 2) 
        {
            for (_Bool i_6 = 1; i_6 < 1; i_6 += 1) 
            {
                {
                    var_15 *= min((((((/* implicit */int) var_9)) / (((/* implicit */int) arr_5 [i_5 - 1] [i_5 - 3] [i_4 + 1])))), (((/* implicit */int) (!(((/* implicit */_Bool) (+(18446744073709551615ULL))))))));
                    /* LoopSeq 2 */
                    for (int i_7 = 0; i_7 < 11; i_7 += 4) /* same iter space */
                    {
                        var_16 = min((((((/* implicit */int) min((((/* implicit */short) (unsigned char)255)), (arr_0 [i_6])))) * (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)88))))))), (max((((/* implicit */int) ((((/* implicit */int) var_0)) > (((/* implicit */int) var_3))))), (max((var_4), (((/* implicit */int) (unsigned char)251)))))));
                        var_17 *= ((/* implicit */unsigned int) (((-(11ULL))) == (((/* implicit */unsigned long long int) (-(2145386496U))))));
                        var_18 = ((/* implicit */signed char) max((var_18), (((/* implicit */signed char) (((-(40384756))) < (((/* implicit */int) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_25 [i_4] [i_5] [i_5] [i_4]))))) || (((/* implicit */_Bool) ((int) var_5)))))))))));
                        var_19 = ((/* implicit */unsigned long long int) min((var_19), (((/* implicit */unsigned long long int) ((((/* implicit */int) min((((/* implicit */unsigned char) (_Bool)1)), ((unsigned char)28)))) & (max((((/* implicit */int) var_6)), (arr_19 [9] [i_5] [i_6]))))))));
                    }
                    for (int i_8 = 0; i_8 < 11; i_8 += 4) /* same iter space */
                    {
                        var_20 *= ((/* implicit */unsigned char) max((((((/* implicit */_Bool) ((((/* implicit */int) (_Bool)1)) << (((/* implicit */int) arr_21 [i_4] [i_4] [i_4] [(unsigned short)0]))))) ? (((((/* implicit */_Bool) var_10)) ? (((/* implicit */unsigned long long int) var_4)) : (arr_22 [7U] [i_4] [i_6] [i_8]))) : (((/* implicit */unsigned long long int) ((((/* implicit */int) var_8)) | (((/* implicit */int) var_6))))))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */int) (unsigned short)65531)) / (-40384755)))) ? (((/* implicit */int) ((_Bool) (_Bool)1))) : (((/* implicit */int) var_5)))))));
                        var_21 = ((/* implicit */unsigned char) max((var_21), (((/* implicit */unsigned char) max(((-(((((/* implicit */_Bool) (unsigned char)74)) ? (((/* implicit */int) arr_2 [i_4])) : (((/* implicit */int) var_3)))))), (((((/* implicit */_Bool) (unsigned char)137)) ? ((+(((/* implicit */int) (unsigned short)8191)))) : (((/* implicit */int) (unsigned char)226)))))))));
                        var_22 -= ((/* implicit */unsigned long long int) (-(((/* implicit */int) (unsigned short)27201))));
                        var_23 = ((/* implicit */_Bool) ((((/* implicit */int) (unsigned char)23)) >> (((((/* implicit */int) (unsigned short)37756)) - (37735)))));
                    }
                    var_24 = ((/* implicit */long long int) ((((((-616262777) + (2147483647))) >> (((2147483621) - (2147483594))))) / (((/* implicit */int) var_0))));
                }
            } 
        } 
        arr_29 [i_4 + 1] [i_4 - 2] = ((((((/* implicit */_Bool) arr_23 [i_4 + 1] [i_4])) ? (var_4) : (((/* implicit */int) var_8)))) % (((/* implicit */int) ((((/* implicit */_Bool) arr_23 [i_4 + 1] [i_4])) && (((/* implicit */_Bool) var_1))))));
        var_25 = ((/* implicit */short) min((var_25), (((/* implicit */short) (unsigned char)255))));
        var_26 = ((/* implicit */signed char) ((((/* implicit */int) ((((/* implicit */_Bool) var_2)) || (((/* implicit */_Bool) arr_22 [i_4] [(_Bool)1] [i_4] [i_4]))))) >> (((((((/* implicit */_Bool) (short)22474)) ? ((+(40384749))) : (min((var_4), (((/* implicit */int) var_2)))))) - (40384746)))));
    }
    for (unsigned long long int i_9 = 2; i_9 < 10; i_9 += 3) /* same iter space */
    {
        var_27 -= ((/* implicit */unsigned char) (((-(max((((/* implicit */unsigned int) (unsigned short)2)), (881051727U))))) << (((/* implicit */int) (!(((/* implicit */_Bool) 255U)))))));
        var_28 = ((/* implicit */unsigned short) min((((((((/* implicit */_Bool) arr_17 [i_9])) ? (((/* implicit */int) (unsigned short)50681)) : (((/* implicit */int) var_6)))) << (((((((/* implicit */_Bool) (unsigned short)0)) ? (var_10) : (((/* implicit */long long int) ((/* implicit */int) arr_11 [i_9 - 2] [i_9]))))) - (37004LL))))), (((/* implicit */int) (signed char)-38))));
        arr_34 [i_9] [i_9] = ((/* implicit */unsigned long long int) ((((((/* implicit */long long int) ((/* implicit */int) (short)22494))) - (9223372036854775807LL))) & (((/* implicit */long long int) (+(((/* implicit */int) var_2)))))));
    }
}
