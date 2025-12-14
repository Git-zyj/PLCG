/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 111434
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=111434 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/111434
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
    var_14 = ((/* implicit */_Bool) ((unsigned long long int) var_13));
    /* LoopNest 3 */
    for (unsigned char i_0 = 2; i_0 < 15; i_0 += 4) 
    {
        for (int i_1 = 1; i_1 < 13; i_1 += 2) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 16; i_2 += 4) 
            {
                {
                    var_15 ^= ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)92)) ? (arr_4 [i_0 + 1] [i_1 - 1] [i_2] [i_2]) : (arr_4 [11LL] [i_1 - 1] [i_1 - 1] [i_2])))) ? (((((/* implicit */int) ((((/* implicit */int) arr_0 [i_0 - 1] [i_1])) <= (((/* implicit */int) (signed char)-78))))) * ((~(((/* implicit */int) (_Bool)0)))))) : (((/* implicit */int) max((min((((/* implicit */signed char) (_Bool)1)), ((signed char)-77))), ((signed char)-94))))));
                    /* LoopSeq 1 */
                    for (unsigned long long int i_3 = 0; i_3 < 16; i_3 += 1) 
                    {
                        arr_9 [i_2] [(short)7] [i_1] [(short)7] [i_0] [i_3] = ((/* implicit */signed char) ((((((/* implicit */_Bool) ((long long int) var_8))) || (((/* implicit */_Bool) -2321727191513297353LL)))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) 2140706362)) ? (((/* implicit */int) ((((/* implicit */_Bool) -1052304662)) || (((/* implicit */_Bool) (unsigned char)77))))) : (((/* implicit */int) (short)-3172)))))));
                        var_16 = ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) min((-1053018494444464688LL), (arr_4 [i_0] [i_1] [i_2] [i_3])))) ? (((/* implicit */int) (!(((/* implicit */_Bool) -2321727191513297356LL))))) : (((/* implicit */int) arr_2 [i_0 - 1] [i_1] [i_0 - 2])))) <= (((/* implicit */int) ((unsigned char) ((((/* implicit */_Bool) (short)-27919)) ? (((/* implicit */int) (unsigned char)249)) : (((/* implicit */int) (short)-32763))))))));
                        arr_10 [i_0 + 1] [i_1] [i_2] [i_1] = ((/* implicit */long long int) ((((/* implicit */unsigned long long int) ((((var_9) & (((/* implicit */int) (short)27911)))) >> (((((/* implicit */int) max(((signed char)73), (((/* implicit */signed char) (_Bool)1))))) - (48)))))) | (((((/* implicit */_Bool) ((((/* implicit */int) (_Bool)1)) ^ (((/* implicit */int) arr_3 [i_1] [i_1 + 2]))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)127))) : (((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)65535))) | (var_6)))))));
                        /* LoopSeq 2 */
                        for (unsigned char i_4 = 0; i_4 < 16; i_4 += 4) /* same iter space */
                        {
                            var_17 = ((/* implicit */unsigned short) ((((2321727191513297366LL) < (0LL))) ? (((/* implicit */int) ((8742028424744146915ULL) != (18446744073709551615ULL)))) : (((/* implicit */int) (((-(-13LL))) == (((/* implicit */long long int) ((/* implicit */int) arr_8 [i_1 + 2] [i_1] [i_0 + 1] [i_1 + 2] [i_1]))))))));
                            var_18 = ((/* implicit */short) ((((/* implicit */int) ((signed char) 1936689225U))) > (((/* implicit */int) ((min((((/* implicit */unsigned long long int) (short)-27924)), (1ULL))) <= (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_3 [i_2] [i_0])) << (((1395083142U) - (1395083140U)))))))))));
                            var_19 += ((/* implicit */signed char) min((max((max((10192134827157762824ULL), (184660128293212533ULL))), (((/* implicit */unsigned long long int) min((var_13), ((_Bool)1)))))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) (_Bool)1)), (20ULL)))) ? (((0U) >> (((((/* implicit */int) arr_2 [i_0] [i_4] [i_4])) + (101))))) : (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_0] [i_0]))))))));
                            arr_13 [0LL] [i_1] [i_2] [0LL] [i_4] [(signed char)7] [i_3] = ((/* implicit */long long int) ((((/* implicit */_Bool) min((arr_5 [i_0 - 2] [(_Bool)1] [i_0]), (((/* implicit */unsigned char) ((((/* implicit */long long int) var_5)) == (2321727191513297352LL))))))) ? (((((/* implicit */_Bool) arr_8 [i_1 - 1] [i_1] [i_2] [13] [i_1])) ? (((/* implicit */int) min((arr_0 [i_0 - 2] [i_0 - 2]), (((/* implicit */signed char) (_Bool)1))))) : (((/* implicit */int) ((((/* implicit */_Bool) arr_6 [i_0 - 1] [i_1 + 2] [i_1 + 2] [i_4])) || (((/* implicit */_Bool) (short)-27953))))))) : (((((/* implicit */_Bool) 127ULL)) ? (((/* implicit */int) arr_7 [i_0 - 1] [i_0] [i_0] [i_0])) : (((/* implicit */int) max((arr_1 [i_3]), (((/* implicit */signed char) var_0)))))))));
                        }
                        for (unsigned char i_5 = 0; i_5 < 16; i_5 += 4) /* same iter space */
                        {
                            arr_16 [i_5] [i_3] [i_3] [i_1] [i_1] [i_1 - 1] [i_0] = ((/* implicit */short) min((((/* implicit */unsigned long long int) ((signed char) (signed char)-100))), (((((/* implicit */_Bool) 1013659417U)) ? (((((/* implicit */_Bool) 2321727191513297356LL)) ? (14904401891251191553ULL) : (18446744073709551596ULL))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 2321727191513297341LL)) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) arr_3 [i_5] [i_5])))))))));
                            var_20 ^= ((/* implicit */_Bool) ((unsigned long long int) ((((/* implicit */_Bool) (+(2321727191513297368LL)))) ? (((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) (short)-32405))) / (var_3)))) : (arr_15 [i_0 - 2] [i_0] [i_0 - 2] [i_1 + 2]))));
                            arr_17 [i_0 + 1] [i_1] [i_2] [i_3] [i_2] [i_1] = ((/* implicit */unsigned short) ((((/* implicit */long long int) ((((/* implicit */_Bool) 6918330724358988854LL)) ? (((/* implicit */int) arr_2 [i_0 + 1] [i_1] [i_1 + 1])) : (((/* implicit */int) arr_2 [i_0 - 2] [i_1] [i_1 + 3]))))) >= ((~(9223372036854775790LL)))));
                        }
                    }
                    arr_18 [i_0] [i_1] [i_1] [i_1 + 2] = ((/* implicit */long long int) ((((/* implicit */int) ((6318213663933121013LL) < (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_5 [i_2] [i_1 - 1] [i_0]))) >= (18446744073709551596ULL)))))))) == (((((/* implicit */_Bool) (unsigned short)53056)) ? (((/* implicit */int) arr_8 [i_1] [i_1] [i_1 + 3] [i_1 + 3] [i_1])) : (((/* implicit */int) arr_8 [i_1] [i_2] [i_2] [i_2] [i_1]))))));
                    arr_19 [i_0] [i_1] [i_0] = ((/* implicit */unsigned long long int) ((((unsigned long long int) ((8527044200079017531LL) == (7176550483766576625LL)))) >= (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_0] [i_0])))));
                    var_21 ^= ((/* implicit */unsigned int) ((((min((var_6), (22ULL))) << (((((((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)79))) ^ (18446744073709551571ULL))) - (18446744073709551467ULL))))) >> (((((((/* implicit */_Bool) 18446744073709551615ULL)) ? (((((/* implicit */long long int) ((/* implicit */int) (signed char)51))) + (-293573692980990508LL))) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)100))))) + (293573692980990498LL)))));
                }
            } 
        } 
    } 
    /* LoopNest 2 */
    for (short i_6 = 0; i_6 < 13; i_6 += 4) 
    {
        for (long long int i_7 = 1; i_7 < 12; i_7 += 4) 
        {
            {
                arr_24 [i_6] [i_6] = ((/* implicit */signed char) ((((/* implicit */int) ((1520866256U) >= (((/* implicit */unsigned int) ((/* implicit */int) arr_7 [i_7] [i_6] [i_6] [i_6])))))) != (((((/* implicit */int) (signed char)15)) * (((/* implicit */int) arr_7 [(short)11] [i_7 + 1] [i_7 + 1] [i_6]))))));
                arr_25 [i_6] [i_7] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)175)) ? (((/* implicit */int) arr_11 [i_7] [i_7] [i_7 + 1] [i_7 - 1] [i_7] [i_7 + 1])) : (((/* implicit */int) arr_1 [i_7 - 1]))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_1 [i_7 - 1]))))) : (((/* implicit */int) ((short) arr_11 [i_7 - 1] [i_7 + 1] [i_7 + 1] [i_7 - 1] [i_7] [i_7 - 1])))));
                var_22 = ((/* implicit */long long int) min((var_22), (((((((/* implicit */long long int) ((/* implicit */int) arr_8 [i_7] [i_7] [i_7 + 1] [i_7] [i_6]))) & (((((/* implicit */_Bool) 4294967295LL)) ? (((/* implicit */long long int) ((/* implicit */int) arr_0 [i_6] [i_7]))) : (268585270875178562LL))))) ^ (-4294967298LL)))));
                arr_26 [i_7 + 1] = ((/* implicit */short) max((((((/* implicit */_Bool) 8540026666299395628LL)) ? (arr_20 [i_7 + 1] [i_6]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-117))))), (((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) (short)0))) & (4294967306LL))))));
                arr_27 [(_Bool)1] [(_Bool)1] = ((/* implicit */unsigned long long int) -1LL);
            }
        } 
    } 
}
