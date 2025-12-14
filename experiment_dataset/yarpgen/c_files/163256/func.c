/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 163256
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=163256 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/163256
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
    var_16 = ((/* implicit */signed char) ((((/* implicit */_Bool) min((var_2), (((/* implicit */unsigned long long int) ((((/* implicit */int) (short)-1)) & (((/* implicit */int) var_10)))))))) ? (((/* implicit */unsigned long long int) ((max((((/* implicit */unsigned int) (signed char)62)), (var_8))) >> ((((~(var_1))) + (1942452469)))))) : (((((/* implicit */_Bool) max((7715745570624288973ULL), (((/* implicit */unsigned long long int) var_9))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)156))) : (var_13)))));
    var_17 = ((/* implicit */unsigned char) min((var_17), (((/* implicit */unsigned char) max((((((/* implicit */unsigned int) (~(((/* implicit */int) (signed char)62))))) % (((((/* implicit */_Bool) var_15)) ? (var_8) : (((/* implicit */unsigned int) ((/* implicit */int) var_10))))))), (((((/* implicit */unsigned int) ((((/* implicit */int) (signed char)-63)) * (((/* implicit */int) var_3))))) / (((644648845U) * (((/* implicit */unsigned int) ((/* implicit */int) var_14))))))))))));
    /* LoopSeq 2 */
    for (_Bool i_0 = 0; i_0 < 0; i_0 += 1) 
    {
        /* LoopSeq 4 */
        /* vectorizable */
        for (unsigned int i_1 = 0; i_1 < 10; i_1 += 2) /* same iter space */
        {
            arr_7 [i_0] [i_0 + 1] = ((/* implicit */_Bool) var_8);
            /* LoopNest 2 */
            for (unsigned int i_2 = 2; i_2 < 8; i_2 += 4) 
            {
                for (unsigned int i_3 = 0; i_3 < 10; i_3 += 2) 
                {
                    {
                        var_18 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */int) arr_8 [i_0] [i_1] [i_2 - 1] [(unsigned char)5])) % (((/* implicit */int) (signed char)13))))) ? (arr_12 [i_0 + 1] [i_0] [i_0] [i_0 + 1] [i_0]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_5 [i_0] [i_3])))));
                        var_19 = ((/* implicit */long long int) max((var_19), (((/* implicit */long long int) ((((/* implicit */int) (short)-2843)) >= (((/* implicit */int) (signed char)38)))))));
                        var_20 *= ((/* implicit */short) (_Bool)1);
                        arr_15 [i_0] [i_1] [i_0 + 1] &= ((/* implicit */signed char) var_12);
                    }
                } 
            } 
            arr_16 [i_0] [i_1] [i_0] = ((((/* implicit */int) arr_0 [i_1])) / (2147483647));
        }
        /* vectorizable */
        for (unsigned int i_4 = 0; i_4 < 10; i_4 += 2) /* same iter space */
        {
            arr_20 [i_0] [i_0] = ((/* implicit */short) ((((((/* implicit */_Bool) arr_17 [i_0 + 1] [i_0] [i_4])) && (((/* implicit */_Bool) (unsigned char)255)))) ? ((((_Bool)1) ? (3963016625U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)1))))) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) (short)-29453)) || (((/* implicit */_Bool) (signed char)24))))))));
            var_21 = ((/* implicit */signed char) (~(((/* implicit */int) (unsigned short)44653))));
            var_22 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (signed char)62)) ? (((/* implicit */long long int) -1254544498)) : (-4407737206928318203LL)));
        }
        for (unsigned int i_5 = 0; i_5 < 10; i_5 += 2) /* same iter space */
        {
            arr_24 [9] [i_0] [(short)1] = ((/* implicit */signed char) ((((/* implicit */_Bool) 7U)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1))));
            var_23 = max((-1254544498), (((/* implicit */int) (unsigned char)213)));
            var_24 = ((/* implicit */unsigned char) ((19U) < (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) max((((/* implicit */int) (_Bool)1)), (-1753546581)))) || (((/* implicit */_Bool) arr_0 [i_0 + 1]))))))));
            var_25 -= ((/* implicit */unsigned int) (~(((/* implicit */int) ((((/* implicit */int) (signed char)-75)) < (((/* implicit */int) (signed char)33)))))));
        }
        for (unsigned int i_6 = 0; i_6 < 10; i_6 += 2) /* same iter space */
        {
            var_26 = ((/* implicit */short) max((var_26), (((/* implicit */short) ((((/* implicit */int) (unsigned char)251)) != ((~(((/* implicit */int) (_Bool)0)))))))));
            arr_28 [i_0] = (unsigned char)21;
            arr_29 [i_0] [i_0] = ((/* implicit */signed char) var_10);
            var_27 = ((/* implicit */unsigned char) (-(((((/* implicit */_Bool) arr_4 [i_0 + 1])) ? (arr_4 [i_0 + 1]) : (arr_4 [i_0 + 1])))));
        }
        arr_30 [i_0] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) min((arr_1 [i_0]), (arr_17 [i_0] [i_0 + 1] [i_0])))) ? (((/* implicit */int) ((((/* implicit */_Bool) var_3)) || (((/* implicit */_Bool) (signed char)-12))))) : (-124790597)))) ? (max(((~(18446744073709551615ULL))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_19 [i_0] [i_0 + 1])) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned char)255))))))) : (((/* implicit */unsigned long long int) max((1987964434U), (((/* implicit */unsigned int) arr_27 [i_0 + 1] [i_0 + 1] [i_0 + 1]))))));
    }
    for (short i_7 = 0; i_7 < 18; i_7 += 4) 
    {
        var_28 = ((/* implicit */unsigned int) max((var_28), (((/* implicit */unsigned int) (~(((int) (signed char)-64)))))));
        var_29 = ((/* implicit */signed char) (~(((((/* implicit */_Bool) (~(15422107593089971183ULL)))) ? (((/* implicit */int) arr_31 [i_7])) : (((/* implicit */int) arr_32 [i_7]))))));
        arr_34 [i_7] = ((/* implicit */unsigned int) ((((((((/* implicit */_Bool) (short)687)) || (((/* implicit */_Bool) 15422107593089971214ULL)))) ? (((((/* implicit */int) (unsigned short)9537)) << (((((/* implicit */int) (signed char)126)) - (109))))) : (((/* implicit */int) arr_31 [i_7])))) | (((/* implicit */int) ((((/* implicit */_Bool) (unsigned char)0)) && (((/* implicit */_Bool) (signed char)-18)))))));
    }
    var_30 = ((((/* implicit */_Bool) var_4)) ? (((/* implicit */unsigned int) (~(((/* implicit */int) ((((/* implicit */_Bool) (unsigned char)8)) || (((/* implicit */_Bool) 9223372036854775803LL)))))))) : (max((var_5), (((/* implicit */unsigned int) (signed char)-89)))));
}
