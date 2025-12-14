/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 141969
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=141969 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/141969
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
    var_11 = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (+(15086368284822613127ULL)))) ? ((-(var_6))) : (((/* implicit */unsigned int) (+(((/* implicit */int) (short)-12996)))))))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) var_10)) : (var_5)))) ? (((((/* implicit */_Bool) (unsigned short)9)) ? (((/* implicit */int) (short)-23318)) : (((/* implicit */int) (short)-23310)))) : ((+(((/* implicit */int) var_1))))))) : ((+(((((/* implicit */_Bool) var_6)) ? (((/* implicit */long long int) 23U)) : (var_9)))))));
    var_12 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (~((~(var_6)))))) ? ((~(((((/* implicit */_Bool) var_7)) ? (((/* implicit */long long int) ((/* implicit */int) var_8))) : (var_9))))) : (((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 0)) ? (983103159U) : (((/* implicit */unsigned int) var_4))))) ? (((((/* implicit */_Bool) (unsigned short)65527)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)6))) : (var_0))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_1))))))))));
    /* LoopSeq 4 */
    for (signed char i_0 = 0; i_0 < 25; i_0 += 3) 
    {
        /* LoopSeq 3 */
        /* vectorizable */
        for (unsigned char i_1 = 0; i_1 < 25; i_1 += 4) 
        {
            /* LoopNest 2 */
            for (unsigned char i_2 = 0; i_2 < 25; i_2 += 2) 
            {
                for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                {
                    {
                        var_13 = ((/* implicit */signed char) (+(((((/* implicit */_Bool) var_0)) ? (var_6) : (((/* implicit */unsigned int) arr_7 [4] [4]))))));
                        arr_10 [i_0] [i_1] [i_3] = ((/* implicit */_Bool) (+(((((/* implicit */_Bool) 0)) ? (((/* implicit */int) (signed char)-1)) : (((/* implicit */int) (unsigned short)10778))))));
                    }
                } 
            } 
            arr_11 [3U] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) -1567838667)) ? (((/* implicit */int) (unsigned short)32768)) : (27))))));
            var_14 = ((/* implicit */unsigned int) max((var_14), (((/* implicit */unsigned int) (((!(((/* implicit */_Bool) (unsigned short)65519)))) ? ((+(((/* implicit */int) arr_4 [i_0] [i_0])))) : (((((/* implicit */_Bool) arr_1 [i_0])) ? (arr_8 [i_1] [i_1]) : (((/* implicit */int) arr_4 [i_0] [i_0])))))))));
            arr_12 [i_0] [i_0] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (-(((/* implicit */int) var_3))))) ? (((((/* implicit */_Bool) arr_2 [3U])) ? (6093002694392702967LL) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))))) : (((/* implicit */long long int) (+(-1))))));
            var_15 = ((/* implicit */unsigned int) min((var_15), (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((var_10) ? (((/* implicit */int) (unsigned short)29783)) : (((/* implicit */int) var_10))))) ? (((((/* implicit */_Bool) arr_6 [21] [21] [21] [(unsigned char)8])) ? (227170904) : (arr_8 [i_0] [i_0]))) : (((((/* implicit */_Bool) var_2)) ? (arr_7 [i_1] [i_1]) : (((/* implicit */int) var_1)))))))));
        }
        for (unsigned int i_4 = 0; i_4 < 25; i_4 += 2) 
        {
            var_16 = ((/* implicit */unsigned int) (+(((((/* implicit */_Bool) ((((/* implicit */_Bool) 9223372036854775807LL)) ? (arr_7 [i_4] [i_0]) : (((/* implicit */int) arr_4 [i_0] [i_0]))))) ? ((+(((/* implicit */int) arr_4 [(unsigned short)7] [(unsigned short)7])))) : ((-(15)))))));
            arr_17 [i_4] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 67108864U)) ? (2147483647) : (((/* implicit */int) (_Bool)1))))) ? ((+(2147483647))) : (((/* implicit */int) (!(((/* implicit */_Bool) (short)23309)))))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 4294967268U)) ? (((/* implicit */int) (!(((/* implicit */_Bool) -6093002694392702989LL))))) : (((((/* implicit */_Bool) 380366238U)) ? (246849661) : (((/* implicit */int) (unsigned short)24))))))) : (11810870348216807727ULL));
            arr_18 [i_0] [i_4] [i_4] = ((/* implicit */_Bool) (~(4160749568U)));
            arr_19 [(unsigned short)19] [(unsigned short)19] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_7 [i_4] [i_4])) ? (var_4) : (2147483624)))) ? (((((/* implicit */_Bool) arr_16 [i_0])) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)70))) : (var_0))) : (((((/* implicit */_Bool) var_6)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_4 [i_0] [i_0]))) : (2954576033U)))))) ? (((/* implicit */unsigned long long int) (-(((/* implicit */int) (!(((/* implicit */_Bool) (short)23315)))))))) : ((+(((((/* implicit */_Bool) (unsigned short)65515)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)9606))) : (arr_15 [i_0] [21])))))));
            arr_20 [i_0] = ((/* implicit */int) (((!(((/* implicit */_Bool) (+(-246849664)))))) ? (((((/* implicit */_Bool) (+(3969030659U)))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) arr_7 [i_0] [(unsigned short)4])) ? (((/* implicit */int) var_10)) : (var_5)))) : ((+(arr_0 [i_0] [i_0]))))) : (((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_2 [i_0])) ? (((/* implicit */int) var_8)) : (2147483638)))) ? ((((_Bool)1) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)0))) : (arr_16 [i_0]))) : (((((/* implicit */_Bool) (signed char)63)) ? (67108885U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)8187))))))))));
        }
        for (unsigned char i_5 = 0; i_5 < 25; i_5 += 2) 
        {
            arr_24 [i_0] [i_0] [i_5] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (-(67108887U)))) ? (((((/* implicit */_Bool) arr_9 [i_0] [i_0] [i_0] [i_0])) ? (arr_23 [i_0] [i_0] [i_0]) : (((/* implicit */long long int) var_6)))) : (((/* implicit */long long int) ((((/* implicit */_Bool) 3969030659U)) ? (((/* implicit */unsigned int) 246849629)) : (134217727U)))))))));
            var_17 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned short)0)) ? (0) : (1024949205)));
            var_18 = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (-(-246849648)))) ? (((/* implicit */unsigned int) (-(((/* implicit */int) arr_13 [i_0] [i_0] [i_0]))))) : ((+(2283578196U)))))) ? ((+(((((/* implicit */_Bool) arr_21 [i_5])) ? (((/* implicit */unsigned long long int) var_0)) : (arr_15 [i_0] [i_5]))))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_8 [i_0] [i_0])) ? (((/* implicit */unsigned int) arr_8 [i_0] [i_5])) : (arr_16 [i_5])))) ? (((/* implicit */long long int) (+(((/* implicit */int) (unsigned short)1887))))) : (((((/* implicit */_Bool) arr_6 [i_0] [i_0] [i_0] [i_0])) ? (((/* implicit */long long int) arr_5 [i_5] [i_5] [i_5])) : (arr_0 [i_5] [i_0]))))))));
        }
        /* LoopSeq 3 */
        /* vectorizable */
        for (unsigned int i_6 = 0; i_6 < 25; i_6 += 1) 
        {
            /* LoopNest 3 */
            for (short i_7 = 0; i_7 < 25; i_7 += 2) 
            {
                for (unsigned short i_8 = 0; i_8 < 25; i_8 += 4) 
                {
                    for (unsigned int i_9 = 0; i_9 < 25; i_9 += 3) 
                    {
                        {
                            arr_34 [i_9] [i_9] [i_9] [i_9] [i_6] [i_9] [i_9] = ((/* implicit */_Bool) (-((+(arr_23 [i_8] [i_8] [i_8])))));
                            var_19 = ((/* implicit */unsigned char) (+(((((/* implicit */_Bool) arr_13 [i_7] [i_6] [i_0])) ? (2283578196U) : (((/* implicit */unsigned int) var_5))))));
                        }
                    } 
                } 
            } 
            var_20 = ((/* implicit */signed char) min((var_20), (((/* implicit */signed char) ((((/* implicit */_Bool) (+(((/* implicit */int) var_8))))) ? (((((/* implicit */_Bool) var_1)) ? (var_6) : (arr_9 [(short)10] [(short)10] [(short)10] [(short)10]))) : (((/* implicit */unsigned int) ((/* implicit */int) (!(var_10))))))))));
            var_21 = (+((-(-246849645))));
            var_22 = ((/* implicit */long long int) (((!(((/* implicit */_Bool) (unsigned short)65535)))) ? (((/* implicit */unsigned int) (-(((/* implicit */int) (signed char)27))))) : ((-(arr_31 [i_0] [i_0] [i_0])))));
            arr_35 [(short)20] [(short)20] |= ((/* implicit */unsigned char) (+((-(((/* implicit */int) (signed char)119))))));
        }
        for (short i_10 = 0; i_10 < 25; i_10 += 2) 
        {
            var_23 = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (~(551971400)))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_26 [i_10] [i_0])) ? (((/* implicit */int) (unsigned char)13)) : (var_5)))) : ((~(3946936759U)))))) ? (((/* implicit */long long int) (~((~(2147483647)))))) : (((((/* implicit */_Bool) (~(arr_9 [i_10] [i_10] [i_0] [i_0])))) ? (((((/* implicit */_Bool) arr_7 [i_0] [i_0])) ? (var_9) : (((/* implicit */long long int) ((/* implicit */int) var_8))))) : (((((/* implicit */_Bool) (short)-31167)) ? (-9223372036854775791LL) : (((/* implicit */long long int) -246849645))))))));
            /* LoopNest 2 */
            for (long long int i_11 = 0; i_11 < 25; i_11 += 3) 
            {
                for (unsigned char i_12 = 4; i_12 < 22; i_12 += 3) 
                {
                    {
                        var_24 = ((/* implicit */int) ((((/* implicit */_Bool) (-((-(var_4)))))) ? (((((/* implicit */_Bool) (+(arr_25 [i_0] [i_0] [i_10])))) ? ((+(-8885122313670873561LL))) : (((/* implicit */long long int) (+(((/* implicit */int) (unsigned short)65533))))))) : (((/* implicit */long long int) (-((-(((/* implicit */int) var_3)))))))));
                        var_25 = ((/* implicit */unsigned short) (-((-(((((/* implicit */_Bool) var_2)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)49448))) : (arr_37 [i_0])))))));
                    }
                } 
            } 
            var_26 = ((/* implicit */short) (-(((((/* implicit */_Bool) (+(arr_38 [i_10])))) ? ((-(var_2))) : (((((/* implicit */_Bool) arr_38 [i_0])) ? (((/* implicit */int) (unsigned short)63987)) : (((/* implicit */int) (unsigned short)29244))))))));
        }
        /* vectorizable */
        for (unsigned int i_13 = 0; i_13 < 25; i_13 += 1) 
        {
            var_27 += ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((arr_29 [i_0] [i_0] [i_13] [i_13]) ? (arr_7 [i_0] [i_0]) : (((/* implicit */int) var_8))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_33 [i_0] [(_Bool)1] [i_13] [(_Bool)1] [(_Bool)1])))))) : (((((/* implicit */_Bool) (unsigned char)9)) ? (15890640737484191476ULL) : (((/* implicit */unsigned long long int) 2147483642))))));
            var_28 = ((/* implicit */int) min((var_28), (((/* implicit */int) (+((((_Bool)1) ? (((/* implicit */long long int) 255U)) : (arr_37 [i_0]))))))));
            var_29 *= ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)8)) ? (var_5) : (((/* implicit */int) var_3)))))));
            var_30 = ((/* implicit */unsigned int) max((var_30), (((/* implicit */unsigned int) (+(((((/* implicit */_Bool) arr_23 [i_0] [i_0] [(short)24])) ? (arr_7 [i_0] [i_0]) : (var_2))))))));
            /* LoopNest 3 */
            for (unsigned int i_14 = 0; i_14 < 25; i_14 += 3) 
            {
                for (int i_15 = 0; i_15 < 25; i_15 += 4) 
                {
                    for (unsigned char i_16 = 1; i_16 < 22; i_16 += 1) 
                    {
                        {
                            var_31 = ((/* implicit */long long int) max((var_31), (((/* implicit */long long int) (+(246849637))))));
                            var_32 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (+(((/* implicit */int) (signed char)24))))) ? (((var_10) ? (341874812U) : (((/* implicit */unsigned int) var_2)))) : (((/* implicit */unsigned int) (-(((/* implicit */int) (unsigned char)5)))))));
                        }
                    } 
                } 
            } 
        }
    }
    for (unsigned int i_17 = 0; i_17 < 25; i_17 += 4) /* same iter space */
    {
        /* LoopNest 2 */
        for (_Bool i_18 = 0; i_18 < 1; i_18 += 1) 
        {
            for (unsigned short i_19 = 0; i_19 < 25; i_19 += 4) 
            {
                {
                    arr_63 [i_17] &= ((/* implicit */short) (-(((((/* implicit */_Bool) ((((/* implicit */_Bool) 246849637)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)93))) : (arr_25 [i_18] [i_18] [i_17])))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned char)15)) ? (((/* implicit */int) var_1)) : (var_2)))) : (((((/* implicit */_Bool) var_9)) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)0))) : (var_0)))))));
                    arr_64 [i_17] [i_17] [i_19] [i_19] = ((/* implicit */short) (-(((((/* implicit */_Bool) (-(((/* implicit */int) var_3))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned char)181)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)2))) : (4294967289U)))) : (((((/* implicit */_Bool) -1940731816)) ? (((/* implicit */unsigned long long int) var_2)) : (17592186044415ULL)))))));
                    arr_65 [i_17] [i_17] = ((/* implicit */_Bool) (+(((((/* implicit */_Bool) (-(((/* implicit */int) var_10))))) ? ((+(((/* implicit */int) (unsigned char)162)))) : (((((/* implicit */_Bool) (signed char)82)) ? (var_5) : (((/* implicit */int) (unsigned short)32768))))))));
                    var_33 = ((/* implicit */int) (-(((((/* implicit */_Bool) (+(((/* implicit */int) (short)-1))))) ? ((+(1327111063U))) : (((/* implicit */unsigned int) (+(var_4))))))));
                    var_34 *= ((/* implicit */_Bool) (-(((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_4 [i_17] [i_17])) ? (var_5) : (((/* implicit */int) (signed char)93))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_5))))) : ((-(((/* implicit */int) arr_41 [i_17] [i_17] [14U] [i_19]))))))));
                }
            } 
        } 
        var_35 *= ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 2061584302080LL)) ? (-7450774937546817496LL) : (((/* implicit */long long int) ((/* implicit */int) (signed char)99)))))) ? (((((/* implicit */_Bool) 348030535U)) ? (-656968795) : ((-2147483647 - 1)))) : ((+(((((/* implicit */_Bool) var_3)) ? (var_2) : (((/* implicit */int) (unsigned char)158))))))));
    }
    /* vectorizable */
    for (unsigned int i_20 = 0; i_20 < 25; i_20 += 4) /* same iter space */
    {
        arr_69 [(unsigned char)8] = ((/* implicit */signed char) ((((/* implicit */_Bool) (+(2147483644)))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) arr_37 [i_20])) ? (2147483632) : (((/* implicit */int) var_10))))) : (((var_8) ? (var_9) : (((/* implicit */long long int) var_0))))));
        arr_70 [i_20] |= ((/* implicit */unsigned int) (-(((((/* implicit */_Bool) 5138938687772092947LL)) ? (((/* implicit */int) (signed char)-108)) : (arr_39 [i_20] [i_20] [i_20])))));
    }
    for (unsigned int i_21 = 0; i_21 < 25; i_21 += 4) /* same iter space */
    {
        arr_73 [i_21] = ((/* implicit */unsigned char) (+(((((/* implicit */_Bool) 2147483647)) ? (-924901163) : (536870848)))));
        arr_74 [19ULL] = ((/* implicit */_Bool) (-((-((-(-2147483645)))))));
    }
    var_36 = ((/* implicit */unsigned short) min((var_36), (((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (-(((/* implicit */int) (short)32756))))) ? ((+(((/* implicit */int) (short)0)))) : (((((/* implicit */_Bool) var_2)) ? (var_7) : (((/* implicit */int) var_8))))))))))));
}
