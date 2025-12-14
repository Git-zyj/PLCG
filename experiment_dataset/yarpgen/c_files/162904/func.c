/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 162904
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=162904 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/162904
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
    for (int i_0 = 2; i_0 < 12; i_0 += 4) /* same iter space */
    {
        /* LoopSeq 3 */
        for (unsigned int i_1 = 2; i_1 < 13; i_1 += 1) /* same iter space */
        {
            arr_5 [i_1] [i_1] = ((/* implicit */long long int) (~(((((/* implicit */_Bool) (short)-1)) ? (-1906084073) : (((/* implicit */int) (unsigned short)31720))))));
            var_20 = ((/* implicit */unsigned char) max((var_20), (((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */long long int) ((((/* implicit */_Bool) var_14)) ? (var_16) : (((/* implicit */int) var_19))))) < (max((arr_3 [i_1] [i_0 + 1]), (((/* implicit */long long int) var_19)))))))) < (((((((/* implicit */_Bool) var_4)) ? (3228865824111863029ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [(unsigned short)8]))))) << (((((/* implicit */int) (unsigned short)33815)) - (33788))))))))));
            var_21 -= ((/* implicit */signed char) ((((unsigned int) var_16)) == (((/* implicit */unsigned int) var_0))));
            var_22 = ((/* implicit */long long int) (~((~(((((/* implicit */int) (unsigned short)33831)) | (((/* implicit */int) var_9))))))));
            var_23 = ((/* implicit */long long int) (((!(((/* implicit */_Bool) ((((/* implicit */_Bool) 6302886636559288960LL)) ? (var_15) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)65535)))))))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) 1849417340U)) ? (((/* implicit */int) (unsigned short)52511)) : (((/* implicit */int) (unsigned short)31713))))) ? (2147483647) : (((/* implicit */int) (_Bool)0)))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (var_3) : (((/* implicit */unsigned long long int) arr_3 [i_0] [i_1 - 1]))))) ? (((((/* implicit */_Bool) var_14)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) (unsigned short)13025)))) : (((((/* implicit */int) var_5)) << (((((/* implicit */int) var_2)) - (98)))))))));
        }
        /* vectorizable */
        for (unsigned int i_2 = 2; i_2 < 13; i_2 += 1) /* same iter space */
        {
            var_24 -= ((/* implicit */unsigned long long int) (~(((/* implicit */int) (unsigned short)31719))));
            /* LoopNest 2 */
            for (signed char i_3 = 3; i_3 < 12; i_3 += 1) 
            {
                for (unsigned short i_4 = 0; i_4 < 14; i_4 += 4) 
                {
                    {
                        var_25 = (~(((((/* implicit */_Bool) var_4)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)64191))) : (arr_12 [i_0] [i_0] [i_2] [i_3 - 3] [8ULL] [i_4]))));
                        var_26 ^= ((/* implicit */_Bool) (~(((/* implicit */int) var_10))));
                    }
                } 
            } 
        }
        for (short i_5 = 0; i_5 < 14; i_5 += 4) 
        {
            /* LoopSeq 1 */
            for (unsigned long long int i_6 = 3; i_6 < 12; i_6 += 3) 
            {
                var_27 = ((/* implicit */short) (-(((/* implicit */int) ((unsigned short) (short)1)))));
                var_28 = ((/* implicit */long long int) var_6);
            }
            arr_19 [12ULL] [i_0] [i_0] = min((max((3346920754562825608ULL), (((/* implicit */unsigned long long int) (signed char)-84)))), (max((((/* implicit */unsigned long long int) 16773120)), (12415989865279969352ULL))));
            arr_20 [i_5] = ((/* implicit */short) ((((/* implicit */_Bool) -235856565)) ? (((/* implicit */long long int) (-(65535U)))) : (((((-6122582124824828036LL) == (((/* implicit */long long int) ((/* implicit */int) (unsigned short)13025))))) ? (((/* implicit */long long int) ((/* implicit */int) var_2))) : (-2398025220545548375LL)))));
            arr_21 [i_0] [3LL] [3LL] = ((/* implicit */unsigned char) max(((~(22ULL))), (((((/* implicit */_Bool) var_8)) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_1)) ? (var_16) : (((/* implicit */int) (_Bool)1))))) : (137438953471ULL)))));
        }
        var_29 = ((/* implicit */unsigned long long int) (+((+(((/* implicit */int) arr_18 [i_0 - 2] [i_0 - 2]))))));
        var_30 = ((/* implicit */unsigned char) min((var_30), (((/* implicit */unsigned char) (-(arr_12 [i_0 - 1] [(_Bool)1] [i_0] [i_0] [i_0] [i_0 - 1]))))));
    }
    for (int i_7 = 2; i_7 < 12; i_7 += 4) /* same iter space */
    {
        arr_24 [3LL] [3LL] = ((/* implicit */long long int) ((((/* implicit */_Bool) (+(var_0)))) ? (((/* implicit */int) (short)31)) : (((/* implicit */int) var_14))));
        /* LoopNest 2 */
        for (signed char i_8 = 3; i_8 < 12; i_8 += 1) 
        {
            for (short i_9 = 2; i_9 < 13; i_9 += 2) 
            {
                {
                    arr_29 [i_7] [10ULL] [i_9] = ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned short)33831)) ? (20LL) : (((/* implicit */long long int) ((/* implicit */int) arr_17 [i_7 + 2] [i_7 + 1] [i_7] [(signed char)13])))))) == (((unsigned long long int) ((((/* implicit */_Bool) 1152921500311879680ULL)) ? (((/* implicit */long long int) ((/* implicit */int) var_19))) : (4362447842880727063LL))))));
                    var_31 -= ((/* implicit */unsigned short) (!(((/* implicit */_Bool) (~(((((/* implicit */_Bool) 6491415091046573290ULL)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)65535))) : (3140948885976179711LL))))))));
                    var_32 += ((/* implicit */int) (+(9223372036854775807LL)));
                }
            } 
        } 
        arr_30 [i_7] |= ((/* implicit */signed char) 72057594037927935ULL);
        arr_31 [i_7 - 1] [i_7 - 1] = min((((/* implicit */unsigned long long int) (~(((/* implicit */int) (unsigned short)0))))), ((+(((((/* implicit */_Bool) -6122582124824828036LL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)61541))) : (27ULL))))));
    }
    for (signed char i_10 = 1; i_10 < 23; i_10 += 4) 
    {
        arr_35 [i_10] = ((/* implicit */short) max((max((((/* implicit */unsigned long long int) ((((/* implicit */long long int) 16776704)) == (-3140948885976179718LL)))), (7ULL))), (min((max((var_3), (5771095758696953936ULL))), (((/* implicit */unsigned long long int) ((((/* implicit */int) (short)0)) == (((/* implicit */int) var_6)))))))));
        var_33 -= ((/* implicit */int) (signed char)-64);
        arr_36 [i_10] |= ((/* implicit */unsigned long long int) (((-(var_11))) << (((((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) (short)12567)))) - (27719)))));
        /* LoopNest 3 */
        for (_Bool i_11 = 0; i_11 < 0; i_11 += 1) 
        {
            for (unsigned short i_12 = 0; i_12 < 25; i_12 += 1) 
            {
                for (unsigned short i_13 = 0; i_13 < 25; i_13 += 2) 
                {
                    {
                        var_34 = ((/* implicit */int) var_10);
                        arr_46 [i_11] [i_11 + 1] [i_11] [i_13] [i_12] = ((/* implicit */int) (((~(((/* implicit */int) (unsigned char)255)))) < (((/* implicit */int) (((-(8372693371220744743ULL))) == (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 12675648315012597681ULL)) ? (arr_40 [i_10] [i_11] [i_12] [i_11]) : (((/* implicit */long long int) var_16))))))))));
                    }
                } 
            } 
        } 
    }
    var_35 = ((/* implicit */short) max((18446744073709551615ULL), (((/* implicit */unsigned long long int) (short)1973))));
}
