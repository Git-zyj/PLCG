/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 179745
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=179745 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/179745
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
    var_10 = ((/* implicit */long long int) max((((short) var_0)), (((/* implicit */short) (((~(((/* implicit */int) (unsigned short)6)))) < (((/* implicit */int) var_0)))))));
    var_11 = ((/* implicit */int) max(((~(((long long int) var_6)))), (((/* implicit */long long int) (~((~(((/* implicit */int) var_1)))))))));
    /* LoopSeq 2 */
    for (short i_0 = 0; i_0 < 25; i_0 += 3) 
    {
        /* LoopSeq 3 */
        for (long long int i_1 = 0; i_1 < 25; i_1 += 3) 
        {
            var_12 = ((/* implicit */int) var_6);
            arr_8 [i_0] [i_1] = ((/* implicit */int) ((((/* implicit */_Bool) min((((/* implicit */unsigned short) arr_2 [18ULL] [18ULL])), (max(((unsigned short)11), (arr_4 [i_0] [i_1])))))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) 11ULL)) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (1460488443U)))) ? (((/* implicit */unsigned long long int) -6434503454630100519LL)) : (0ULL))) : (max((9802275298664210203ULL), (((/* implicit */unsigned long long int) max((var_8), (((/* implicit */unsigned short) arr_5 [i_1])))))))));
            arr_9 [(short)3] [i_0] = ((/* implicit */unsigned int) (((((_Bool)1) ? (min((11427111796055954435ULL), (((/* implicit */unsigned long long int) -1)))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-70))))) == (((/* implicit */unsigned long long int) ((/* implicit */int) ((signed char) ((((/* implicit */_Bool) arr_5 [i_0])) ? (((/* implicit */int) var_0)) : (((/* implicit */int) var_3)))))))));
            var_13 = ((/* implicit */unsigned short) ((int) (signed char)-95));
        }
        for (unsigned char i_2 = 2; i_2 < 22; i_2 += 4) 
        {
            arr_13 [(signed char)9] [(signed char)9] [i_2] = ((/* implicit */unsigned long long int) min((((/* implicit */unsigned short) ((((/* implicit */_Bool) (-(11806616764558849533ULL)))) && (((/* implicit */_Bool) max((36028797018963967ULL), (((/* implicit */unsigned long long int) -5864459902838553724LL)))))))), (var_8)));
            arr_14 [i_0] [i_2] = ((/* implicit */unsigned long long int) max((min((((((/* implicit */unsigned int) ((/* implicit */int) (short)-3932))) / (arr_3 [1] [1]))), (((/* implicit */unsigned int) var_3)))), (((/* implicit */unsigned int) (-(((((/* implicit */int) var_0)) - (((/* implicit */int) var_3)))))))));
            var_14 = ((/* implicit */long long int) ((((((/* implicit */long long int) ((/* implicit */int) (short)63))) ^ (7290151142035050680LL))) != (((/* implicit */long long int) ((/* implicit */int) arr_2 [i_0] [i_2 + 3])))));
            arr_15 [i_0] [i_0] = ((/* implicit */signed char) ((((11392163359194928235ULL) > (((/* implicit */unsigned long long int) -1)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_3))) : (((((((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)52))) * (18410715276690587659ULL))) * (((/* implicit */unsigned long long int) ((/* implicit */int) var_3)))))));
        }
        for (unsigned long long int i_3 = 1; i_3 < 21; i_3 += 4) 
        {
            arr_18 [i_0] [(_Bool)1] = ((/* implicit */unsigned int) arr_0 [i_0]);
            var_15 = ((/* implicit */signed char) (unsigned char)229);
        }
        /* LoopSeq 3 */
        /* vectorizable */
        for (short i_4 = 1; i_4 < 23; i_4 += 2) 
        {
            arr_21 [i_0] [i_0] [i_0] = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_6 [i_4 + 1])) ? (arr_0 [i_4 + 2]) : (arr_6 [i_4 + 2])));
            var_16 = ((/* implicit */unsigned int) ((-1) * (-1552188708)));
            arr_22 [i_4] [i_0] [i_0] = ((/* implicit */_Bool) ((unsigned long long int) (short)5620));
            var_17 += ((/* implicit */unsigned int) arr_2 [i_0] [i_0]);
        }
        for (unsigned short i_5 = 0; i_5 < 25; i_5 += 3) 
        {
            var_18 *= ((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((((-267893693) + (2147483647))) >> (((1923100854U) - (1923100852U)))))) + (min((max((((/* implicit */unsigned long long int) var_1)), (var_4))), (((/* implicit */unsigned long long int) arr_6 [i_0]))))));
            arr_26 [i_5] [i_5] [i_5] = ((/* implicit */int) ((unsigned short) arr_10 [i_0] [i_5]));
            var_19 = ((((/* implicit */_Bool) ((long long int) arr_20 [i_0]))) ? (arr_20 [i_5]) : (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_20 [i_0])))))));
            arr_27 [i_5] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */int) arr_25 [i_5] [i_5] [i_0])) | (((/* implicit */int) arr_25 [i_0] [i_5] [i_0]))))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_25 [i_5] [9U] [9U])) ? (((/* implicit */int) arr_25 [10] [10] [10])) : (((/* implicit */int) (_Bool)1)))))));
        }
        /* vectorizable */
        for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
        {
            arr_30 [15U] = ((/* implicit */long long int) ((((/* implicit */_Bool) var_5)) ? (arr_3 [i_0] [i_6]) : (((/* implicit */unsigned int) ((/* implicit */int) var_5)))));
            var_20 += ((/* implicit */long long int) ((((((/* implicit */int) (short)-1)) + (2147483647))) >> (((((/* implicit */int) (unsigned char)239)) - (225)))));
            arr_31 [i_0] [i_0] [i_6] = ((/* implicit */unsigned char) (+(((/* implicit */int) (short)-32750))));
        }
        arr_32 [(_Bool)1] = ((/* implicit */unsigned int) (_Bool)1);
        var_21 *= ((/* implicit */unsigned long long int) ((((((((/* implicit */_Bool) -736043057)) ? (4503599627370495LL) : (((/* implicit */long long int) ((/* implicit */int) arr_28 [i_0] [i_0] [i_0]))))) & (((/* implicit */long long int) arr_3 [i_0] [i_0])))) << (((min((min((((/* implicit */unsigned long long int) 6555133226953624149LL)), (arr_19 [i_0] [i_0]))), (((/* implicit */unsigned long long int) max((((/* implicit */long long int) arr_28 [i_0] [i_0] [i_0])), (-2606596496101619333LL)))))) - (59266ULL)))));
    }
    for (_Bool i_7 = 1; i_7 < 1; i_7 += 1) 
    {
        arr_36 [i_7] = ((((((/* implicit */int) (unsigned char)217)) << (((((/* implicit */int) (short)11615)) - (11605))))) >> (((((/* implicit */int) max(((short)5620), ((short)-32764)))) - (5594))));
        var_22 = ((/* implicit */unsigned int) (-(((max((6031062717196109134LL), (((/* implicit */long long int) arr_3 [i_7 - 1] [9])))) + (((/* implicit */long long int) ((2318146599U) - (((/* implicit */unsigned int) -730138373)))))))));
        arr_37 [i_7] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) -1)) ? (-8) : (-8)));
        arr_38 [i_7] = ((/* implicit */unsigned int) 1420936102);
    }
    var_23 = ((/* implicit */signed char) ((((/* implicit */int) var_1)) % (((/* implicit */int) var_7))));
}
