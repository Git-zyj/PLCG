/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 1071
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=1071 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/1071
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
    /* LoopSeq 4 */
    for (unsigned char i_0 = 0; i_0 < 23; i_0 += 2) 
    {
        var_14 &= ((/* implicit */unsigned long long int) (+(((((/* implicit */int) var_9)) | ((-(((/* implicit */int) var_5))))))));
        /* LoopSeq 2 */
        for (short i_1 = 3; i_1 < 22; i_1 += 3) 
        {
            var_15 = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) max((570240930), (((/* implicit */int) arr_3 [(unsigned short)11]))))) ? (arr_2 [i_0]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_6 [i_1])))))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_2 [i_1 - 2])) ? (((/* implicit */int) var_13)) : ((-(((/* implicit */int) (short)18261)))))))));
            arr_7 [i_0] [i_1] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (short)-30718)) ? (570240931) : (((/* implicit */int) ((signed char) ((((/* implicit */_Bool) -1)) || (((/* implicit */_Bool) (unsigned short)17941))))))));
        }
        for (long long int i_2 = 1; i_2 < 20; i_2 += 1) 
        {
            arr_10 [i_0] [i_2] [i_0] = ((/* implicit */int) (short)-19310);
            var_16 -= ((/* implicit */long long int) var_11);
        }
        var_17 = (short)254;
        arr_11 [i_0] = ((/* implicit */unsigned short) (-(((((/* implicit */_Bool) ((13148177551499300830ULL) + (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)93)))))) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)62))) : (((((/* implicit */_Bool) (unsigned char)0)) ? (((/* implicit */long long int) ((/* implicit */int) (short)5916))) : (0LL)))))));
    }
    /* vectorizable */
    for (short i_3 = 0; i_3 < 18; i_3 += 3) 
    {
        var_18 = ((/* implicit */int) ((signed char) ((unsigned char) -1283828191)));
        arr_14 [i_3] = ((/* implicit */long long int) (!(((/* implicit */_Bool) arr_4 [i_3] [i_3] [i_3]))));
        arr_15 [16LL] [i_3] |= ((/* implicit */int) arr_8 [i_3] [i_3]);
    }
    for (long long int i_4 = 0; i_4 < 11; i_4 += 1) 
    {
        /* LoopNest 3 */
        for (short i_5 = 0; i_5 < 11; i_5 += 1) 
        {
            for (long long int i_6 = 0; i_6 < 11; i_6 += 4) 
            {
                for (short i_7 = 2; i_7 < 9; i_7 += 3) 
                {
                    {
                        arr_27 [i_4] [i_7] [i_6] [i_7] = ((/* implicit */long long int) max((((/* implicit */int) ((((/* implicit */int) (short)4963)) > (((/* implicit */int) arr_3 [i_7 + 2]))))), (((((/* implicit */int) var_10)) / (((/* implicit */int) var_8))))));
                        var_19 = ((/* implicit */_Bool) arr_6 [i_4]);
                    }
                } 
            } 
        } 
        var_20 = ((/* implicit */unsigned char) 2147483647);
        /* LoopNest 3 */
        for (short i_8 = 0; i_8 < 11; i_8 += 3) 
        {
            for (unsigned short i_9 = 0; i_9 < 11; i_9 += 3) 
            {
                for (short i_10 = 0; i_10 < 11; i_10 += 4) 
                {
                    {
                        arr_37 [i_4] [i_8] = ((/* implicit */short) (+(((((/* implicit */_Bool) arr_16 [i_9])) ? (((/* implicit */int) arr_16 [i_4])) : (((/* implicit */int) arr_16 [i_4]))))));
                        var_21 = ((/* implicit */short) ((((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */long long int) ((((/* implicit */int) (_Bool)1)) + (((/* implicit */int) var_1))))) == (max((((/* implicit */long long int) arr_13 [i_4] [i_4])), (var_2))))))) / (2558434257U)));
                        arr_38 [i_4] [i_8] [i_4] = ((/* implicit */short) ((((/* implicit */_Bool) ((unsigned short) (-(var_12))))) ? (arr_4 [i_4] [i_9] [i_10]) : (((/* implicit */long long int) min((max((((/* implicit */int) (unsigned char)254)), (2147483644))), (((/* implicit */int) ((((/* implicit */_Bool) (signed char)-7)) && (((/* implicit */_Bool) var_2))))))))));
                    }
                } 
            } 
        } 
    }
    for (unsigned int i_11 = 0; i_11 < 17; i_11 += 1) 
    {
        var_22 ^= ((/* implicit */short) max((((((/* implicit */int) min(((unsigned short)28006), (((/* implicit */unsigned short) (unsigned char)17))))) == (((/* implicit */int) ((-1) == (((/* implicit */int) (unsigned short)65535))))))), (var_9)));
        var_23 -= ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) var_11))))) ? ((~(((/* implicit */int) var_0)))) : (((/* implicit */int) (short)508))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((((/* implicit */int) (_Bool)1)), (617145361)))) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_1 [i_11]))))) : (((((/* implicit */int) var_13)) << (((((/* implicit */int) var_10)) - (32865)))))))) : (((((/* implicit */_Bool) ((unsigned short) var_3))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_5))) : (max((arr_2 [i_11]), (((/* implicit */unsigned long long int) arr_40 [i_11]))))))));
        /* LoopNest 2 */
        for (int i_12 = 1; i_12 < 16; i_12 += 1) 
        {
            for (unsigned char i_13 = 0; i_13 < 17; i_13 += 2) 
            {
                {
                    var_24 *= ((/* implicit */short) max((((/* implicit */long long int) var_5)), (((((/* implicit */long long int) -4)) % (((((/* implicit */_Bool) (short)5916)) ? (arr_4 [i_11] [i_11] [i_11]) : (((/* implicit */long long int) -1))))))));
                    arr_51 [i_13] [i_13] [i_13] [i_12] = ((/* implicit */int) var_4);
                    var_25 = ((/* implicit */_Bool) min((((((/* implicit */_Bool) min((((/* implicit */long long int) var_0)), (-993729888416403994LL)))) ? (((/* implicit */int) (unsigned short)50842)) : (((/* implicit */int) arr_42 [i_12 + 1] [9ULL])))), (((/* implicit */int) ((((/* implicit */_Bool) min((((/* implicit */short) var_0)), (arr_13 [i_11] [i_11])))) && (arr_45 [i_11]))))));
                }
            } 
        } 
        arr_52 [i_11] [i_11] = ((((/* implicit */_Bool) (~(((/* implicit */int) ((_Bool) arr_49 [i_11] [i_11] [(short)0])))))) ? (max((2224906613887872013LL), (((((/* implicit */_Bool) (unsigned short)45945)) ? (((/* implicit */long long int) ((/* implicit */int) var_10))) : (var_12))))) : (((/* implicit */long long int) min((((((/* implicit */_Bool) (signed char)(-127 - 1))) ? (((/* implicit */int) var_9)) : (((/* implicit */int) var_8)))), (((/* implicit */int) arr_8 [i_11] [i_11]))))));
    }
    var_26 += ((/* implicit */_Bool) ((unsigned short) ((((/* implicit */int) max((((/* implicit */short) var_3)), (var_11)))) >> (((/* implicit */int) (_Bool)0)))));
    var_27 = ((/* implicit */short) ((long long int) (short)5904));
    var_28 &= ((/* implicit */unsigned short) ((((((/* implicit */_Bool) ((((/* implicit */int) var_0)) - (((/* implicit */int) var_11))))) ? (var_6) : (((/* implicit */long long int) ((((/* implicit */_Bool) (short)-28120)) ? (-818150293) : (((/* implicit */int) var_0))))))) + (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) ((-168973449780771666LL) ^ (((/* implicit */long long int) -1))))) && (((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)9))) < (14241168177912693188ULL)))))))));
    var_29 = ((/* implicit */long long int) ((((/* implicit */int) ((_Bool) var_10))) > (((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_13)) ? (1183907446U) : (((/* implicit */unsigned int) ((/* implicit */int) var_9)))))))))));
}
