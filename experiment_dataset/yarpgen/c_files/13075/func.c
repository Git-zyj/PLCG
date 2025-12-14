/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 13075
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=13075 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/13075
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
    for (signed char i_0 = 1; i_0 < 13; i_0 += 4) 
    {
        arr_4 [i_0] [i_0 - 1] = ((/* implicit */short) (-(((/* implicit */int) ((18446744073709551615ULL) == (((/* implicit */unsigned long long int) 699144882)))))));
        arr_5 [i_0] |= ((/* implicit */int) ((((/* implicit */_Bool) ((short) (-(arr_2 [i_0]))))) ? (min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 3LL)) && (((/* implicit */_Bool) 2796422479U))))), (arr_3 [i_0 + 1]))) : (((max((((/* implicit */unsigned long long int) arr_2 [i_0 + 1])), (6237858754609491016ULL))) & (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned short)120)) ? (-3756215449123529822LL) : (((/* implicit */long long int) ((/* implicit */int) var_0))))))))));
        arr_6 [i_0 + 1] [i_0] = ((((/* implicit */_Bool) (signed char)-25)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((short) 1073741823ULL)))) : (arr_3 [i_0 + 2]));
        var_12 = ((short) ((((((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)86))) - (arr_3 [(unsigned short)8]))) / (((((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)65))) - (arr_0 [4U])))));
    }
    for (long long int i_1 = 0; i_1 < 22; i_1 += 1) 
    {
        /* LoopNest 2 */
        for (int i_2 = 0; i_2 < 22; i_2 += 2) 
        {
            for (signed char i_3 = 0; i_3 < 22; i_3 += 2) 
            {
                {
                    var_13 = ((/* implicit */unsigned long long int) min((var_13), (min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (short)11753)) && (((((/* implicit */_Bool) -1124108894)) || (((/* implicit */_Bool) (short)-1))))))), ((-(13974515451311956944ULL)))))));
                    var_14 = ((/* implicit */signed char) min((((/* implicit */unsigned long long int) (unsigned short)65416)), (min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned short)118)) ? (((/* implicit */int) (unsigned short)112)) : (((/* implicit */int) (_Bool)1))))), (18446744073709551615ULL)))));
                    var_15 = ((/* implicit */unsigned long long int) var_10);
                    var_16 = ((/* implicit */unsigned short) max(((short)9774), (((/* implicit */short) ((1795033230) < (((/* implicit */int) var_4)))))));
                }
            } 
        } 
        arr_16 [i_1] = (!(((((/* implicit */_Bool) (short)-16023)) || (((/* implicit */_Bool) var_9)))));
        var_17 |= ((/* implicit */_Bool) ((((/* implicit */long long int) (((!(((/* implicit */_Bool) 4247949473U)))) ? (((/* implicit */int) arr_14 [i_1] [(short)10] [i_1] [i_1])) : ((-(((/* implicit */int) var_3))))))) + (((((/* implicit */_Bool) arr_8 [10])) ? (-7901050366572066349LL) : (((/* implicit */long long int) ((/* implicit */int) var_2)))))));
        arr_17 [i_1] = ((/* implicit */unsigned long long int) (-(((arr_8 [i_1]) / (((/* implicit */unsigned int) ((/* implicit */int) var_10)))))));
    }
    for (short i_4 = 0; i_4 < 13; i_4 += 2) 
    {
        var_18 = ((/* implicit */signed char) ((((((/* implicit */unsigned long long int) 945020954)) ^ (33554368ULL))) ^ (((/* implicit */unsigned long long int) max((min((((/* implicit */int) (short)-2689)), (var_11))), (((/* implicit */int) (!((_Bool)1)))))))));
        /* LoopSeq 2 */
        /* vectorizable */
        for (short i_5 = 3; i_5 < 12; i_5 += 2) 
        {
            var_19 = ((/* implicit */short) (~((-(((/* implicit */int) var_0))))));
            arr_24 [i_4] [i_5] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (-(((/* implicit */int) var_4))))) ? (((((/* implicit */_Bool) (short)27182)) ? (((/* implicit */int) (unsigned short)65423)) : (((/* implicit */int) (unsigned char)128)))) : (((/* implicit */int) ((((/* implicit */int) var_10)) > (arr_2 [i_4]))))));
        }
        for (short i_6 = 0; i_6 < 13; i_6 += 4) 
        {
            var_20 = ((/* implicit */unsigned short) ((_Bool) (-((-(arr_7 [i_4]))))));
            var_21 |= ((/* implicit */int) ((((/* implicit */_Bool) max((((/* implicit */int) arr_10 [12ULL] [i_4])), (arr_9 [i_4])))) ? (((/* implicit */long long int) ((((int) var_2)) + (((/* implicit */int) (unsigned short)114))))) : (((((/* implicit */_Bool) (-(((/* implicit */int) (unsigned short)8376))))) ? (max((((/* implicit */long long int) arr_15 [i_4] [i_6])), (arr_11 [i_4] [i_4]))) : (((/* implicit */long long int) ((/* implicit */int) ((short) arr_0 [i_4]))))))));
        }
        arr_27 [i_4] = ((/* implicit */_Bool) arr_12 [i_4]);
        var_22 = ((/* implicit */int) max((var_22), (((/* implicit */int) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((signed char) (unsigned short)65423))) ? ((~(-7901050366572066349LL))) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)135)))))) != (((((/* implicit */_Bool) ((var_4) ? (288225978105200640ULL) : (18446744073709551613ULL)))) ? (((((/* implicit */_Bool) arr_18 [i_4] [i_4])) ? (((/* implicit */unsigned long long int) -699144864)) : (5ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_4))))))))));
        var_23 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((((/* implicit */int) (unsigned char)135)) / (-1026554944))))));
    }
    var_24 += ((/* implicit */signed char) min((((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) (!(var_4)))) : (((((/* implicit */_Bool) var_9)) ? (305855740) : (((/* implicit */int) (unsigned char)240)))))), (((/* implicit */int) max((((/* implicit */signed char) ((((/* implicit */_Bool) var_9)) && (((/* implicit */_Bool) var_8))))), (var_8))))));
    /* LoopSeq 1 */
    for (short i_7 = 0; i_7 < 19; i_7 += 4) 
    {
        var_25 = min((((((/* implicit */int) ((15793817356338897155ULL) < (((/* implicit */unsigned long long int) ((/* implicit */int) (short)32767)))))) | (((((/* implicit */int) arr_15 [i_7] [i_7])) ^ (((/* implicit */int) (short)-8565)))))), ((~(((/* implicit */int) ((short) 9223372036854775807LL))))));
        arr_31 [i_7] = (~(((/* implicit */int) ((unsigned char) min((((/* implicit */unsigned long long int) (signed char)22)), (288225978105200616ULL))))));
        var_26 = ((((((/* implicit */_Bool) ((((/* implicit */_Bool) 18446744073709551611ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-128))) : (18446744073709551611ULL)))) ? (308589447) : (((/* implicit */int) (unsigned char)0)))) << ((((((_Bool)1) ? (((((/* implicit */int) var_1)) << (((14680064) - (14680043))))) : (((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) var_10)))))) - (96468992))));
        var_27 = ((/* implicit */unsigned int) var_10);
        arr_32 [i_7] = ((/* implicit */unsigned long long int) ((unsigned short) ((((/* implicit */_Bool) min((((/* implicit */int) var_10)), (var_11)))) ? (((((/* implicit */_Bool) var_3)) ? (281474976710655ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_10 [i_7] [i_7]))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((short) 562949953421312ULL)))))));
    }
}
