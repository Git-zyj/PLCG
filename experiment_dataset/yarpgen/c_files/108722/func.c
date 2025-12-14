/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 108722
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=108722 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/108722
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
    var_16 -= ((/* implicit */_Bool) min((((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 1557982328U)) ? (18268784721841174964ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)116)))))) ? (((/* implicit */int) ((signed char) 1381202792))) : (((/* implicit */int) (_Bool)1))))), (((((/* implicit */_Bool) ((unsigned int) var_15))) ? (((var_13) >> (((/* implicit */int) (_Bool)1)))) : (((/* implicit */unsigned int) (-(((/* implicit */int) var_10)))))))));
    var_17 = ((/* implicit */_Bool) (-(((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) (short)1121))) % (var_13)))) ? (((var_3) ? (((/* implicit */unsigned int) ((/* implicit */int) var_3))) : (var_9))) : (((/* implicit */unsigned int) (~(((/* implicit */int) (signed char)-26)))))))));
    var_18 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */int) ((unsigned char) var_12))) + (((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) var_11)) : (1381202806)))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) var_15))))) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) -1381202806)) && (((/* implicit */_Bool) 1381202777)))))) : (((((/* implicit */_Bool) var_15)) ? (((/* implicit */long long int) -1381202792)) : (-6960364453797702012LL)))))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? (var_14) : (((/* implicit */unsigned long long int) var_9))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_15)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_15))))) : (((unsigned long long int) var_0))))));
    /* LoopSeq 4 */
    for (signed char i_0 = 0; i_0 < 18; i_0 += 1) /* same iter space */
    {
        var_19 = ((/* implicit */unsigned char) (-((((_Bool)1) ? (-6960364453797702025LL) : (((/* implicit */long long int) ((/* implicit */int) (signed char)-64)))))));
        var_20 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) var_12)) + (-1381202806)))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_0 [i_0] [i_0])) ? (((/* implicit */int) arr_1 [i_0])) : (((/* implicit */int) arr_1 [i_0]))))) : (((arr_0 [i_0] [i_0]) / (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))))))) ? ((+(3976222944U))) : ((+(((((/* implicit */_Bool) var_15)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_0]))) : (arr_0 [i_0] [i_0])))))));
    }
    /* vectorizable */
    for (signed char i_1 = 0; i_1 < 18; i_1 += 1) /* same iter space */
    {
        var_21 = ((/* implicit */unsigned char) ((((/* implicit */unsigned int) arr_4 [i_1])) % (((((/* implicit */_Bool) (short)-10950)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_2))) : (var_13)))));
        arr_5 [i_1] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((-1381202806) + (((/* implicit */int) (signed char)-70))))) ? (((((/* implicit */_Bool) (signed char)-67)) ? (((/* implicit */int) (unsigned short)57847)) : (1381202783))) : (((((/* implicit */int) (_Bool)1)) * (((/* implicit */int) (short)28672))))));
    }
    for (signed char i_2 = 0; i_2 < 18; i_2 += 1) /* same iter space */
    {
        var_22 += ((/* implicit */signed char) ((((/* implicit */_Bool) ((((((/* implicit */_Bool) var_13)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_2]))) : (913062238U))) % ((+(var_13)))))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)11)) ? (((/* implicit */int) arr_1 [i_2])) : (arr_4 [i_2])))) ? (((/* implicit */unsigned int) ((arr_4 [i_2]) >> (((/* implicit */int) (unsigned char)24))))) : (min((538819579U), (((/* implicit */unsigned int) (_Bool)1)))))) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */int) (unsigned char)172)) : (-1381202798)))) || (((/* implicit */_Bool) ((var_4) / (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)127))))))))))));
        var_23 = ((/* implicit */short) min((((/* implicit */int) ((unsigned char) var_12))), (((((/* implicit */_Bool) ((var_7) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_6 [i_2] [i_2]))) : (var_4)))) ? (((((/* implicit */int) var_3)) + (((/* implicit */int) var_1)))) : (((((/* implicit */_Bool) var_6)) ? (arr_4 [i_2]) : (((/* implicit */int) var_12))))))));
    }
    /* vectorizable */
    for (signed char i_3 = 0; i_3 < 18; i_3 += 1) /* same iter space */
    {
        var_24 = ((/* implicit */short) ((((((/* implicit */_Bool) var_6)) ? (14178713359902585226ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-27624))))) - (((/* implicit */unsigned long long int) ((arr_4 [i_3]) + (((/* implicit */int) var_7)))))));
        var_25 = ((/* implicit */short) ((((((/* implicit */int) var_0)) == (((/* implicit */int) arr_6 [i_3] [i_3])))) ? (arr_4 [i_3]) : (((arr_2 [i_3]) / (((/* implicit */int) (unsigned char)213))))));
        /* LoopNest 3 */
        for (long long int i_4 = 3; i_4 < 16; i_4 += 1) 
        {
            for (signed char i_5 = 0; i_5 < 18; i_5 += 3) 
            {
                for (signed char i_6 = 1; i_6 < 16; i_6 += 2) 
                {
                    {
                        var_26 = ((/* implicit */unsigned long long int) (-(((((/* implicit */_Bool) var_6)) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)15189))) : (var_9)))));
                        var_27 = ((/* implicit */unsigned char) min((var_27), (((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_4 [i_4])) ? (2644176020U) : (((/* implicit */unsigned int) ((/* implicit */int) var_7)))))) ? (((((/* implicit */int) (signed char)62)) % (((/* implicit */int) (signed char)60)))) : (((/* implicit */int) ((((/* implicit */int) (unsigned char)53)) == (((/* implicit */int) (_Bool)1))))))))));
                        arr_16 [i_5] = ((/* implicit */long long int) (((_Bool)1) ? (518946124U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)0)))));
                        var_28 *= ((/* implicit */short) ((((/* implicit */_Bool) ((var_7) ? (1381202798) : (((/* implicit */int) var_5))))) ? (((((/* implicit */int) var_7)) % (arr_4 [i_6]))) : (((((/* implicit */_Bool) (signed char)-35)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (signed char)60))))));
                    }
                } 
            } 
        } 
    }
    /* LoopSeq 2 */
    for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
    {
        arr_20 [i_7] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) ((unsigned char) (signed char)-11)))))) ? (((((/* implicit */int) max((var_2), (var_11)))) & ((((_Bool)1) ? (1882241886) : (((/* implicit */int) (short)32767)))))) : (((((/* implicit */_Bool) 2756221009U)) ? (((/* implicit */int) (unsigned char)255)) : (((/* implicit */int) (unsigned char)233))))));
        /* LoopSeq 2 */
        for (unsigned int i_8 = 0; i_8 < 11; i_8 += 4) /* same iter space */
        {
            var_29 = ((/* implicit */_Bool) ((((((/* implicit */_Bool) (signed char)64)) || (((/* implicit */_Bool) (signed char)-56)))) ? (((((unsigned int) arr_2 [i_7])) - (((/* implicit */unsigned int) ((((/* implicit */_Bool) (signed char)-50)) ? (((/* implicit */int) arr_12 [i_8] [i_8] [i_8])) : (arr_22 [i_7] [i_7])))))) : (((/* implicit */unsigned int) ((/* implicit */int) ((1381202815) == (((((/* implicit */_Bool) -1381202791)) ? (1381202801) : (((/* implicit */int) (signed char)-74))))))))));
            var_30 = ((/* implicit */signed char) min((var_30), (((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)54)) ? (((/* implicit */int) (unsigned short)51818)) : (((/* implicit */int) (short)0))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) (short)-14430)) > (((((/* implicit */int) (short)17)) * (((/* implicit */int) (signed char)-50)))))))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) 11708658294746131916ULL)) ? (1381202808) : (((/* implicit */int) (signed char)116))))) ? (((((/* implicit */_Bool) (signed char)35)) ? (var_4) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_10 [i_7] [i_8]))))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_12))) : (var_9)))))))))));
        }
        for (unsigned int i_9 = 0; i_9 < 11; i_9 += 4) /* same iter space */
        {
            arr_27 [i_7] = ((((((/* implicit */int) (signed char)-79)) == (((/* implicit */int) arr_18 [i_7])))) ? (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_18 [i_9])) + (((/* implicit */int) (short)15741))))) : ((+(6722195479417894696ULL))));
            var_31 = ((/* implicit */int) min((var_31), (((/* implicit */int) (+(((((/* implicit */_Bool) ((long long int) var_0))) ? (((((/* implicit */_Bool) arr_8 [i_9])) ? (4635461695865277032LL) : (((/* implicit */long long int) 0U)))) : (((/* implicit */long long int) ((((/* implicit */_Bool) arr_7 [i_9])) ? (((/* implicit */int) var_0)) : (((/* implicit */int) arr_12 [i_7] [(unsigned short)15] [i_9]))))))))))));
            var_32 |= ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) + (552274808U)))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) (signed char)115)) ? (((/* implicit */int) (signed char)98)) : (((/* implicit */int) (_Bool)1))))) : (((unsigned int) ((((/* implicit */_Bool) (signed char)(-127 - 1))) ? (((/* implicit */int) var_7)) : (((/* implicit */int) var_12)))))));
        }
        var_33 = ((/* implicit */short) (+(((/* implicit */int) (_Bool)1))));
        var_34 = ((/* implicit */unsigned int) min((var_34), (((/* implicit */unsigned int) ((((((((/* implicit */_Bool) -214304199181933667LL)) ? (((/* implicit */int) (unsigned char)10)) : (((/* implicit */int) (short)16699)))) == (((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) arr_26 [i_7])) : (((/* implicit */int) arr_6 [i_7] [(unsigned short)13])))))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_10))))) ? (((((/* implicit */_Bool) var_11)) ? (var_9) : (((/* implicit */unsigned int) ((/* implicit */int) var_1))))) : (((/* implicit */unsigned int) ((/* implicit */int) ((_Bool) arr_7 [i_7]))))))))))));
    }
    /* vectorizable */
    for (int i_10 = 2; i_10 < 18; i_10 += 4) 
    {
        arr_30 [i_10 + 4] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)-40)) ? (var_9) : (((/* implicit */unsigned int) ((/* implicit */int) var_0)))))) ? (((/* implicit */long long int) ((unsigned int) arr_28 [i_10]))) : (((-3924778069748834363LL) | (((/* implicit */long long int) ((/* implicit */int) (signed char)-84)))))));
        /* LoopNest 2 */
        for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) 
        {
            for (short i_12 = 1; i_12 < 19; i_12 += 3) 
            {
                {
                    var_35 = ((/* implicit */unsigned long long int) max((var_35), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (signed char)106)) ? (((/* implicit */int) (signed char)-75)) : (((/* implicit */int) arr_28 [i_10 + 1])))))));
                    var_36 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_32 [i_10 - 1] [i_11] [i_12 - 1])) ? (((((/* implicit */int) (signed char)-79)) / (((/* implicit */int) var_10)))) : (((/* implicit */int) ((short) (signed char)82)))));
                    arr_36 [i_10 + 3] [i_11] [i_12] = ((((/* implicit */_Bool) (signed char)-40)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1)));
                }
            } 
        } 
        arr_37 [i_10] = ((/* implicit */signed char) ((((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) (_Bool)0))))) ? (((/* implicit */unsigned long long int) ((var_13) % (((/* implicit */unsigned int) 24576))))) : (((((/* implicit */_Bool) (signed char)2)) ? (arr_34 [i_10]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_10)))))));
        arr_38 [i_10] [i_10 - 2] &= ((((/* implicit */_Bool) arr_29 [i_10 + 1] [i_10 + 3])) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_34 [i_10])) ? (((/* implicit */int) (unsigned short)41103)) : (((/* implicit */int) arr_33 [i_10] [i_10] [i_10 + 4] [i_10]))))) : (((((/* implicit */_Bool) var_11)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_33 [i_10] [i_10 + 2] [i_10] [i_10]))) : (377605215U))));
    }
}
