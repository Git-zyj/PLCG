/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 11593
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=11593 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/11593
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
    /* vectorizable */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        /* LoopNest 2 */
        for (signed char i_1 = 3; i_1 < 20; i_1 += 3) 
        {
            for (int i_2 = 0; i_2 < 21; i_2 += 1) 
            {
                {
                    arr_8 [i_1] [i_1] = ((/* implicit */short) ((unsigned long long int) -76490095));
                    /* LoopSeq 2 */
                    for (unsigned long long int i_3 = 0; i_3 < 21; i_3 += 4) 
                    {
                        arr_11 [i_0] [i_1] [i_0] [i_1] [i_1] = ((/* implicit */unsigned short) ((16777215U) <= (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)99))) != (0ULL)))))));
                        var_14 = ((/* implicit */signed char) max((var_14), (((/* implicit */signed char) ((((/* implicit */int) (unsigned short)0)) >= (((/* implicit */int) (signed char)99)))))));
                        var_15 = ((/* implicit */_Bool) (unsigned char)151);
                    }
                    for (unsigned char i_4 = 0; i_4 < 21; i_4 += 4) 
                    {
                        var_16 = ((/* implicit */_Bool) min((var_16), (((((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) (signed char)99)) <= (((/* implicit */int) (unsigned char)197)))))) <= (((((/* implicit */_Bool) (short)6)) ? (16640563693295283896ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)68)))))))));
                        arr_15 [i_1] [i_1 - 3] [i_1] = ((((/* implicit */_Bool) ((unsigned char) 3313682083U))) ? (((/* implicit */int) ((signed char) 3673560896U))) : (((/* implicit */int) (short)-6505)));
                    }
                }
            } 
        } 
        var_17 = ((/* implicit */unsigned char) min((var_17), (((/* implicit */unsigned char) ((((/* implicit */int) (_Bool)1)) & (((/* implicit */int) (short)-1)))))));
        /* LoopNest 2 */
        for (short i_5 = 4; i_5 < 20; i_5 += 2) 
        {
            for (signed char i_6 = 0; i_6 < 21; i_6 += 3) 
            {
                {
                    /* LoopSeq 1 */
                    for (_Bool i_7 = 1; i_7 < 1; i_7 += 1) 
                    {
                        arr_25 [i_0] [i_5 - 2] [i_6] = ((unsigned char) ((((/* implicit */_Bool) (short)-17037)) ? (((/* implicit */int) (unsigned short)46055)) : (((/* implicit */int) (signed char)(-127 - 1)))));
                        arr_26 [i_0] [i_6] = ((/* implicit */unsigned int) ((int) (unsigned char)197));
                        /* LoopSeq 2 */
                        for (int i_8 = 1; i_8 < 20; i_8 += 1) 
                        {
                            var_18 -= ((/* implicit */unsigned char) (short)8192);
                            arr_30 [i_0] [i_6] [i_0] = ((/* implicit */long long int) ((((0ULL) <= (((/* implicit */unsigned long long int) 92221079)))) ? (((((/* implicit */int) (unsigned short)64093)) | (((/* implicit */int) (_Bool)1)))) : (((/* implicit */int) ((((/* implicit */unsigned long long int) 49152U)) != (5900991600637679765ULL))))));
                        }
                        for (unsigned int i_9 = 3; i_9 < 20; i_9 += 1) 
                        {
                            var_19 = ((/* implicit */_Bool) min((var_19), (((((/* implicit */int) (short)-6491)) >= (((/* implicit */int) (_Bool)1))))));
                            arr_35 [i_0] [i_0] [i_6] [i_0] [i_0] = ((/* implicit */short) ((unsigned short) (signed char)-100));
                            arr_36 [i_0] [i_5] [i_6] [i_7 - 1] [i_9] [i_6] [i_6] = ((/* implicit */short) ((1915433570U) / (((/* implicit */unsigned int) ((((/* implicit */int) (signed char)-19)) / (((/* implicit */int) (_Bool)1)))))));
                        }
                        arr_37 [i_7] [i_6] [i_6] [i_0] = ((((/* implicit */_Bool) 1039974683U)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)64089))) : (((((/* implicit */_Bool) 3795413525U)) ? (12545752473071871850ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))))));
                        arr_38 [(short)7] [i_0] [i_5 - 2] [2LL] [i_7] [i_6] = ((/* implicit */int) ((((/* implicit */long long int) 2404070849U)) != (-1999802904605316034LL)));
                    }
                    var_20 += ((/* implicit */unsigned char) ((((/* implicit */_Bool) -8681272900221974947LL)) ? (((/* implicit */unsigned long long int) 1915433557U)) : (5196223212153688241ULL)));
                    arr_39 [i_6] [i_5 - 3] [i_6] [i_6] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)170))) / (2379533716U)))) ? (499553770U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)58)))));
                }
            } 
        } 
        var_21 *= ((/* implicit */signed char) ((((((/* implicit */_Bool) 9223372036854775807LL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)90))) : (330101344220876366ULL))) <= (((/* implicit */unsigned long long int) ((/* implicit */int) ((499553770U) <= (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-6)))))))));
        var_22 += ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) (signed char)-28))) != (581190090U)));
    }
    for (short i_10 = 0; i_10 < 20; i_10 += 1) /* same iter space */
    {
        var_23 -= ((/* implicit */short) 288230376151710720LL);
        var_24 = ((((/* implicit */int) ((((/* implicit */int) (unsigned char)59)) != (((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)511))) >= (499553770U))))))) >= (((/* implicit */int) ((((unsigned int) 23ULL)) <= (((/* implicit */unsigned int) ((((/* implicit */_Bool) (short)-17037)) ? (((/* implicit */int) (short)-17939)) : (1642244182))))))));
        arr_44 [i_10] = ((/* implicit */unsigned int) min((((((((/* implicit */_Bool) 1541959476)) ? (((/* implicit */int) (unsigned char)142)) : (-1607847364))) / (((/* implicit */int) max(((unsigned char)58), ((unsigned char)255)))))), (((/* implicit */int) ((((/* implicit */int) (short)-1)) <= (((/* implicit */int) (short)-2)))))));
        /* LoopNest 2 */
        for (long long int i_11 = 0; i_11 < 20; i_11 += 3) 
        {
            for (int i_12 = 0; i_12 < 20; i_12 += 3) 
            {
                {
                    arr_53 [(short)16] [i_11] [i_11] [i_10] = ((/* implicit */unsigned short) ((max(((((_Bool)1) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)76))) : (36028796884746240ULL))), (((/* implicit */unsigned long long int) 3795413534U)))) * (((/* implicit */unsigned long long int) ((((/* implicit */int) (short)-24704)) * (((int) (unsigned char)212)))))));
                    var_25 = ((/* implicit */_Bool) max((var_25), (((/* implicit */_Bool) ((signed char) (short)2833)))));
                }
            } 
        } 
        arr_54 [i_10] [18LL] = ((/* implicit */_Bool) (signed char)75);
    }
    for (short i_13 = 0; i_13 < 20; i_13 += 1) /* same iter space */
    {
        var_26 &= ((/* implicit */signed char) ((unsigned int) ((538883754605489441ULL) - (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)203))))));
        arr_57 [i_13] = ((/* implicit */int) ((((_Bool) ((((/* implicit */int) (unsigned char)255)) != (442170059)))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((unsigned long long int) (signed char)75)) >= (((/* implicit */unsigned long long int) max((2681861325U), (((/* implicit */unsigned int) (_Bool)0))))))))) : (((((/* implicit */_Bool) 499553770U)) ? (565053135U) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)75)))))));
        var_27 -= ((/* implicit */unsigned short) min((((/* implicit */int) ((((/* implicit */int) ((((/* implicit */int) (unsigned short)55048)) >= (((/* implicit */int) (short)-1))))) != (((/* implicit */int) (unsigned short)55048))))), (((((/* implicit */int) ((4108813027U) <= (((/* implicit */unsigned int) ((/* implicit */int) (short)-3743)))))) / (((/* implicit */int) ((((/* implicit */int) (signed char)-75)) != (((/* implicit */int) (unsigned char)58)))))))));
        var_28 = ((/* implicit */short) ((((((/* implicit */_Bool) min((3729914161U), (((/* implicit */unsigned int) (signed char)38))))) ? (max((3729914161U), (881768440U))) : (((/* implicit */unsigned int) ((/* implicit */int) ((3658894236U) >= (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-18))))))))) >= (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) (short)-17939)) != (((/* implicit */int) ((((/* implicit */int) (signed char)-2)) <= (2147483647))))))))));
    }
    for (long long int i_14 = 1; i_14 < 20; i_14 += 1) 
    {
        /* LoopNest 2 */
        for (short i_15 = 0; i_15 < 22; i_15 += 1) 
        {
            for (short i_16 = 2; i_16 < 18; i_16 += 1) 
            {
                {
                    var_29 = ((/* implicit */signed char) ((((/* implicit */int) ((((/* implicit */int) ((((/* implicit */unsigned long long int) 565053135U)) >= (7815331749450325087ULL)))) <= (((/* implicit */int) ((3795413508U) != (((/* implicit */unsigned int) ((/* implicit */int) (short)-22316))))))))) <= (((/* implicit */int) ((((/* implicit */int) (unsigned char)240)) != (((/* implicit */int) ((10484337343988472087ULL) >= (((/* implicit */unsigned long long int) ((/* implicit */int) (short)24546)))))))))));
                    var_30 -= ((/* implicit */unsigned int) ((int) ((((/* implicit */_Bool) 4)) ? (((/* implicit */int) (unsigned char)251)) : (((/* implicit */int) (_Bool)1)))));
                }
            } 
        } 
        /* LoopNest 2 */
        for (_Bool i_17 = 0; i_17 < 1; i_17 += 1) 
        {
            for (unsigned int i_18 = 1; i_18 < 21; i_18 += 4) 
            {
                {
                    var_31 = ((/* implicit */signed char) ((((/* implicit */unsigned int) ((/* implicit */int) (signed char)54))) >= (((unsigned int) 499553770U))));
                    var_32 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((long long int) ((((/* implicit */int) (signed char)110)) <= (872119206))))) ? (((((/* implicit */int) ((((/* implicit */int) (_Bool)1)) >= (((/* implicit */int) (signed char)-39))))) / (((/* implicit */int) max((((/* implicit */unsigned char) (signed char)66)), ((unsigned char)12)))))) : (((/* implicit */int) (_Bool)0))));
                    /* LoopSeq 2 */
                    for (short i_19 = 4; i_19 < 20; i_19 += 2) 
                    {
                        var_33 &= ((/* implicit */_Bool) ((int) (_Bool)1));
                        arr_75 [0ULL] [i_19] [i_17] [i_17] [i_18] [i_19 - 4] &= ((/* implicit */unsigned short) ((short) ((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)89))) * (0U)))) ? (((/* implicit */int) (unsigned char)19)) : (((/* implicit */int) ((-1131062529) >= (((/* implicit */int) (signed char)-1))))))));
                        var_34 = ((/* implicit */long long int) (_Bool)1);
                    }
                    for (long long int i_20 = 0; i_20 < 22; i_20 += 3) 
                    {
                        var_35 = ((/* implicit */unsigned int) min((var_35), (((/* implicit */unsigned int) max((((((/* implicit */int) (signed char)-18)) != (((/* implicit */int) (_Bool)1)))), (((3729914156U) <= (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)0))))))))));
                        var_36 *= ((/* implicit */signed char) ((((/* implicit */int) ((((/* implicit */int) (unsigned char)0)) >= (((((/* implicit */int) (short)32750)) / (((/* implicit */int) (_Bool)1))))))) <= (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (unsigned char)32))) != (((((/* implicit */_Bool) 565053140U)) ? (-1LL) : (((/* implicit */long long int) 2468337877U)))))))));
                    }
                }
            } 
        } 
        var_37 = ((/* implicit */short) ((((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */unsigned long long int) 1806220247U)) : (1616631536239000120ULL)))) ? (((((/* implicit */unsigned int) ((/* implicit */int) (short)-3))) / (565053135U))) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) (unsigned short)8727)) >= (((/* implicit */int) (signed char)126))))))));
    }
    var_38 = ((/* implicit */long long int) max((var_38), (((/* implicit */long long int) ((((/* implicit */_Bool) ((signed char) ((((/* implicit */int) (signed char)15)) + (((/* implicit */int) (signed char)-66)))))) ? (((/* implicit */int) (unsigned char)255)) : (((/* implicit */int) (signed char)-67)))))));
}
